# NEWYork Times popular articles listing using the popular api
This app supports iPhones and iPads running iOS 10.
Built with Xcode Version is (9.2 ). Written in Swift 3 and Objective-C.

This sample project initially displays a list of the most popular New York Times articles from the last 7 days. It enables users to search the New York Times API for articles, view details about each article, share the article, and view the full article in Safari.

One of the main motivation points behind the featured(popular) articles list was that they all contained thumbnail images which made the app look really nice on startup.

I decided I'd write half of the app in Swift. I thought I'd do the networking and model layers in Swift since I heard parsing JSON in Swift is all the rage. However, this brought up some interesting challenges when interfacing with Objective-C. Mainly with error handling, which I never got around to.

I look forward to your feedback!

## 3rd Party
[Nick Lockwood's AsyncImageView library](https://github.com/nicklockwood/AsyncImageView).

## Q&A
> You may have noticed that only a few number of articles are returned by the API. Actually, there is a “page” parameter in the API that allows you to specify different pages to return. How would you implement this to display more results for a user’s search?

Add a table footer view that displays a loading indicator. In willDisplayCell, fetch the next page of data and append the results to your data source. Hide the footer once the last page is reached.

A request limit on the API key could result in failed requests if the limit is hit.

Some solutions:

If using multiple API keys is allowed and doable, you could have a random API key generator function in your app that assigns a random API key per request.

My ideal solution would:
1. Minimize repeated requests (Make sure you have a debouncer on your search textfield so requests are only made after the user has stopped typing.)
2. Keep as many people on separate API keys as possible
3. Use an exponential back off algorithm when necessary
4. Let the user know if a requests takes longer than a certain threshold.

Another solution would be to contact NYT and ask to increase the API key request limit.



## Prompt: ios-coding-exercise-sbishopwta

Make a simple app that can search the New York Times article search API and return a list of articles for a given search query. The user should also be able to click on one of the returned articles and view the whole article in a web browser.

### API Details:

* Base URL: http://api.nytimes.com/svc/mostpopular/v2/mostviewed/all-sections/7.json?api- key=sample-key
* API-KEY:`9db1b57b9e804346a76209e9eacb5cd8`
* Example URL: http://api.nytimes.com/svc/search/v2/articlesearch.json?q=presidential+elections&api-key=60aeaeae7fff4477958cfe2a8a6a76f5
* API Documentation: http://developer.nytimes.com/docs/read/article_search_api_v2#h2-requests

### App Details:
* Create a new project in Xcode.
* The app should open to a view controller with a table view embedded in a navigation controller.
* There should be a search bar at the top, where a user can tap into and type a search term.
* As the user types in the search bar it should dynamically populate a tableview.
* For each article returned from the response, the table view cell should have the article headline and a thumbnail image from that article.
* When a user taps on an article, it should push a detail view controller onto the navigation stack and present some details about that article.


