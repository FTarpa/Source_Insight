
基础路径设置:
Inward   = True
Backward = 0
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\WebDav\SardineAndroid
base:\\


AsFile:base:






.gitignore
build.gradle                                // kotlin version
gradlew
gradlew.bat
LICENSE
lint.xml
proguard-rules.pro
README.md
.circleci\config.yml
src\main\AndroidManifest.xml
src\main\java\com\thegrizzlylabs\sardineandroid\DavAce.java
src\main\java\com\thegrizzlylabs\sardineandroid\DavAcl.java
src\main\java\com\thegrizzlylabs\sardineandroid\DavPrincipal.java
src\main\java\com\thegrizzlylabs\sardineandroid\DavQuota.java
src\main\java\com\thegrizzlylabs\sardineandroid\DavResource.java
src\main\java\com\thegrizzlylabs\sardineandroid\Sardine.java                              // Sardine客户端
src\main\java\com\thegrizzlylabs\sardineandroid\Version.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\BasicAuthenticator.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\OkHttpSardine.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\SardineException.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\ExistsResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\InputStreamResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\LockResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\MultiStatusResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\ResourcesResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\ResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\ValidatingResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\impl\handler\VoidResponseHandler.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Ace.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Acl.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Activelock.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\All.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Allprop.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Authenticated.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Bind.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Collection.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\CurrentUserPrivilegeSet.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Deny.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\EntityWithAnyElement.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Error.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Exclusive.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Grant.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Group.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Inherited.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Keepalive.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Limit.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Link.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Location.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Lockdiscovery.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Lockentry.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Lockinfo.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Lockscope.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Locktoken.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Locktype.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Multistatus.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Omit.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Owner.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Principal.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\PrincipalCollectionSet.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\PrincipalURL.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Privilege.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Prop.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Property.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Propertybehavior.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Propertyupdate.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Propfind.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Propname.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Propstat.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Protected.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\QuotaAvailableBytes.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\QuotaUsedBytes.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Read.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\ReadAcl.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\ReadCurrentUserPrivilegeSet.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Remove.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Report.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Resourcetype.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Response.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\SearchRequest.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Self.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Set.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Shared.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\SimplePrivilege.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Source.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Supportedlock.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\SupportedReport.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\SupportedReportSet.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\SyncCollection.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Unauthenticated.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\UnBind.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Unlock.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\Write.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\WriteAcl.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\WriteContent.java
src\main\java\com\thegrizzlylabs\sardineandroid\model\WriteProperties.java
src\main\java\com\thegrizzlylabs\sardineandroid\report\SardineReport.java
src\main\java\com\thegrizzlylabs\sardineandroid\report\SyncCollectionReport.java
src\main\java\com\thegrizzlylabs\sardineandroid\util\ElementConverter.java
src\main\java\com\thegrizzlylabs\sardineandroid\util\EntityWithAnyElementConverter.java
src\main\java\com\thegrizzlylabs\sardineandroid\util\SardineUtil.java
src\test\java\com\thegrizzlylabs\sardineandroid\AuthenticationTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\DavResourceTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\FunctionalSardineTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\IntegrationTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\LockTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\ProppatchTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\SardineUtilTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\impl\SardineExceptionTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\impl\handler\LockResponseHandlerTest.java
src\test\java\com\thegrizzlylabs\sardineandroid\impl\handler\MultiStatusResponseHandlerTest.java

