from selenium import webdriver

browser = webdriver.Chrome()
browser.get("http://naver.com")
browser.quit()