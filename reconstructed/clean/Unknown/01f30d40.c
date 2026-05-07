// Function: FUN_01f30d40
// Address: 01f30d40
// Size: 634 bytes
// Class: Unknown
// String references:
//   "objectAtIndex:"
//   "isVisible"
//   "delegate"
//   "gnWindow"
//   "viewsNeedDisplay"
//   "cocoaRootView"
//   "setShouldNotifyRunLoopObservers:"
//   "displayIfNeeded"

void FUN_01f30d40(void)

{
  void*puVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  code *pcVar6;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t uVar8;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  uint64_t uStack_40;
  char local_38 [8];
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  lVar3 = FUN_01e587a0();
  puVar1 = PTR_s_gnWindow_026ca038;
  if (lVar3 != 0) {
    lVar3 = (*PTR__objc_msgSend_024a9998)();
    if (lVar3 != 0) {
      uVar7 = 0;
      pcVar6 = PTR__objc_msgSend_024a9998;
      uVar8 = extraout_XMM0_Da;
      do {
        (*pcVar6)(uVar8,uVar7);
        cVar2 = (*pcVar6)();
        if (cVar2 != '\0') {
          cVar2 = (*pcVar6)();
          if (cVar2 != '\0') {
            lVar3 = (*pcVar6)();
            if (lVar3 == 0) {
              local_48 = 0;
              uStack_40 = 0;
              uStack_40._0_1_ = '\0';
            }
            else {
              _objc_msgSend_stret(extraout_XMM0_Da_01,puVar1);
            }
            puVar5 = &uStack_40;
            if ((char)uStack_40 == '\0') {
              puVar5 = (uint64_t *)local_38;
            }
            local_38[0] = (char)uStack_40;
            *(void*)puVar5 = 0;
            if (((char)uStack_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pcVar6 = PTR__objc_msgSend_024a9998;
            if (local_48 != 0) {
              FUN_01e58640();
              uStack_40 = uStack_40 & 0xffffffffffffff00;
              cVar2 = FUN_00d24090();
              if (((char)uStack_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (cVar2 != '\0') {
                (*pcVar6)();
                uVar8 = (*pcVar6)();
                (*pcVar6)(uVar8,0);
                uVar8 = (*pcVar6)();
                (*pcVar6)(uVar8,1);
              }
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
          }
        }
        uVar7 = uVar7 + 1;
        uVar4 = (*pcVar6)();
        uVar8 = extraout_XMM0_Da_00;
      } while (uVar7 < uVar4);
    }
  }
  (*PTR__objc_release_024a99a0)();
  return;
}

