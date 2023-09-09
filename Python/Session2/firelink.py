import webbrowser
import firelink
def firefox(site):
    print("Open {}".format(site))
    webbrowser.open(site,0)
    
def site(x):
    if (x == 1):
       return facebook_link
    elif (x == 2):
       return insta_link
    elif (x == 3):
       return youtube_link
    elif (x == 4):
       return gmail_link
    elif (x == 5):
        return linkedin_link
    else:
        print("Wrong Enter !!")
 

facebook_link='facebook.com'
insta_link='instagram.com'
youtube_link='youtube.com'
gmail_link='gmail.com'
linkedin_link='linkedin.com'