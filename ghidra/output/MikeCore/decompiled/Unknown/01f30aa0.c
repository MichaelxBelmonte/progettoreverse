// Function: FUN_01f30aa0
// Address: 01f30aa0
// Size: 528 bytes
// Class: Unknown
// String references:
//   "objectAtIndex:"
//   "isVisible"
//   "delegate"
//   "gnWindow"
//   "viewsNeedDisplay"


undefined8 FUN_01f30aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_01;
  undefined *puVar11;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong uStack_40;
  char local_38 [8];
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  lVar5 = FUN_01e587a0();
  puVar3 = PTR_s_gnWindow_026ca038;
  if ((lVar5 == 0) ||
     (puVar11 = PTR_s_delegate_026ca030, lVar5 = (*(code *)PTR__objc_msgSend_024a9998)(), lVar5 == 0
     )) {
    local_50 = 0;
  }
  else {
    local_50 = 0;
    uVar8 = 0;
    pcVar9 = (code *)PTR__objc_msgSend_024a9998;
    uVar10 = extraout_XMM0_Da;
    do {
      (*pcVar9)(uVar10,uVar8,param_3,param_4,puVar11);
      cVar4 = (*pcVar9)();
      if ((cVar4 != '\0') && (cVar4 = (*pcVar9)(), cVar4 != '\0')) {
        lVar5 = (*pcVar9)();
        if (lVar5 == 0) {
          local_48 = 0;
          uStack_40 = 0;
          uStack_40._0_1_ = '\0';
        }
        else {
          _objc_msgSend_stret(extraout_XMM0_Da_01,puVar3);
        }
        puVar7 = &uStack_40;
        if ((char)uStack_40 == '\0') {
          puVar7 = (ulonglong *)local_38;
        }
        local_38[0] = (char)uStack_40;
        *(undefined1 *)puVar7 = 0;
        if (((char)uStack_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 == 0) {
LAB_01f30c70:
          bVar2 = true;
          bVar1 = true;
        }
        else {
          FUN_01e58640();
          uStack_40 = uStack_40 & 0xffffffffffffff00;
          cVar4 = FUN_00d24090();
          if (((char)uStack_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') goto LAB_01f30c70;
          local_50 = 1;
          bVar2 = false;
          bVar1 = false;
        }
        if ((local_38[0] != '\0') && (bVar1 = bVar2, local_48 != 0)) {
          FUN_00d50b20();
        }
        pcVar9 = (code *)PTR__objc_msgSend_024a9998;
        if (!bVar1) break;
      }
      uVar8 = uVar8 + 1;
      uVar6 = (*pcVar9)();
      uVar10 = extraout_XMM0_Da_00;
    } while (uVar8 < uVar6);
  }
  (*(code *)PTR__objc_release_024a99a0)();
  return local_50;
}


