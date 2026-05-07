// Function: FUN_01e6ad10
// Address: 01e6ad10
// Size: 827 bytes
// Class: GNString
// String references:
//   "printerWithName:"
//   "objectAtIndex:"


/* WARNING: Removing unreachable block (ram,0x01e6af63) */
/* WARNING: Removing unreachable block (ram,0x01e6af70) */

undefined8 *
FUN_01e6ad10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *unaff_RDI;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  
  puVar6 = DAT_028ba0f0;
  if ((DAT_028ba0f0 == (undefined8 *)0x0) || (DAT_028ba0f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ba0f0 == (undefined8 *)0x0) {
      _objc_alloc();
      uVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)();
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      pcVar4 = DAT_02572370;
      (*DAT_02572370)();
      if (DAT_028ba0f0 == puVar6) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar12 = DAT_028ba0f0 != (undefined8 *)0x0;
        DAT_028ba0f0 = puVar6;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ba0f8 == '\0') {
        DAT_028ba0f8 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar3 = PTR__objc_msgSend_024a9998;
      bVar1 = false;
      puVar6 = (undefined8 *)0x0;
      for (uVar11 = 0; uVar7 = (*(code *)puVar3)(), uVar11 < uVar7; uVar11 = uVar11 + 1) {
        uVar8 = (*(code *)puVar3)(param_1,uVar11,param_3,param_4,uVar5);
        lVar9 = (*(code *)puVar3)(param_1,uVar8);
        puVar10 = puVar6;
        if (lVar9 != 0) {
          puVar10 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar10 = &DAT_026a3ec0;
          puVar10[2] = 0;
          FUN_00d500e0();
          if (puVar10 == puVar6) {
            if (bVar1) {
              FUN_00d50b20();
              puVar10 = puVar6;
              bVar12 = bVar1;
            }
            else {
              bVar12 = true;
              puVar10 = puVar6;
            }
          }
          else {
            bVar12 = true;
            if ((bVar1) && (puVar6 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          (*(code *)PTR__objc_retain_024a99a8)();
          *(longlong *)(puVar10[2] + 0x10) = lVar9;
          FUN_00d21140();
          bVar1 = bVar12;
        }
        puVar6 = puVar10;
      }
      (*(code *)PTR__objc_release_024a99a0)();
      if (DAT_028ba0f0 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &DAT_02572358;
        (*pcVar4)();
        if (DAT_028ba0f0 == puVar10) {
          bVar2 = false;
          bVar12 = false;
        }
        else {
          bVar2 = true;
          bVar12 = true;
          bVar13 = DAT_028ba0f0 != (undefined8 *)0x0;
          DAT_028ba0f0 = puVar10;
          if (bVar13) {
            FUN_00d50b20();
          }
        }
        if (DAT_028ba0f8 == '\0') {
          DAT_028ba0f8 = '\x01';
          FUN_00e8cb90();
          bVar12 = bVar2;
        }
        if (!bVar12) {
          FUN_00d50b20();
        }
      }
      if ((bVar1) && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028ba0f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba0f9 = '\x01';
      FUN_00e8cb70();
    }
    puVar6 = DAT_028ba0f0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      goto LAB_01e6b041;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e6b041:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


