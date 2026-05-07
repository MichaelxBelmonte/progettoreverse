// Function: FUN_01e69f00
// Address: 01e69f00
// Size: 729 bytes
// Class: GNString
// String references:
//   "name"
//   "isEqualTo:"


longlong * FUN_01e69f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_70;
  char local_68;
  undefined *puVar8;
  
  FUN_01e6ad10();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_01e6a092;
    FUN_00d50b00();
    if (0 < *(int *)(local_70 + 0xc)) goto LAB_01e69f58;
LAB_01e6a19f:
    bVar2 = false;
  }
  else {
    if (local_70 != 0) {
      if (*(int *)(local_70 + 0xc) < 1) goto LAB_01e6a19f;
LAB_01e69f58:
      if (DAT_028ba0e0 == 0) {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_024a9998)();
        lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
        if ((lVar5 != 0) && (0 < *(int *)(local_70 + 0xc))) {
          lVar7 = 0;
          lVar5 = 0;
          bVar2 = false;
          puVar8 = PTR_s_isEqualTo__026ca3c0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar7 * 8);
            if (lVar5 == lVar1) {
              if ((!bVar2) && (lVar5 != 0)) {
                bVar2 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar2) && (lVar5 != 0)) {
                FUN_00d50b20();
                bVar2 = true;
                lVar5 = lVar1;
              }
              else {
                bVar2 = true;
                lVar5 = lVar1;
              }
            }
            puVar3 = PTR__objc_msgSend_024a9998;
            (*(code *)PTR__objc_msgSend_024a9998)();
            uVar6 = (*(code *)puVar3)();
            cVar4 = (*(code *)puVar3)(param_1,uVar6,param_3,param_4,puVar8);
            lVar1 = DAT_028ba0e0;
            if (cVar4 != '\0') {
              if ((DAT_028ba0e0 != lVar5) && (FUN_00d50b00(), DAT_028ba0e0 = lVar5, lVar1 != 0)) {
                FUN_00d50b20();
              }
              if (DAT_028ba0e8 == '\0') {
                DAT_028ba0e8 = '\x01';
                FUN_00e8cb90();
              }
              break;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(local_70 + 0xc));
          if (bVar2) {
            FUN_00d50b20();
          }
        }
        (*(code *)PTR__objc_release_024a99a0)();
        if ((DAT_028ba0e0 == 0) && (lVar5 = **(longlong **)(local_70 + 0x10), lVar5 != 0)) {
          FUN_00d50b00();
          lVar7 = DAT_028ba0e0;
          if (DAT_028ba0e0 == lVar5) {
            if (DAT_028ba0e8 == '\0') goto LAB_01e6a184;
          }
          else {
            FUN_00d50b00();
            DAT_028ba0e0 = lVar5;
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if ((lVar5 == 0) || (DAT_028ba0e8 != '\0')) {
              if (lVar5 == 0) goto LAB_01e6a19f;
            }
            else {
LAB_01e6a184:
              DAT_028ba0e8 = '\x01';
              FUN_00e8cb90();
            }
          }
          FUN_00d50b20();
          goto LAB_01e6a19f;
        }
      }
      lVar5 = DAT_028ba0e0;
      bVar2 = false;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01e6a1b2;
    }
LAB_01e6a092:
    bVar2 = true;
  }
  lVar5 = DAT_028ba0e0;
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x01e6a1b2:
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


