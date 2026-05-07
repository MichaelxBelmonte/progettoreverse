// Function: FUN_01d45080
// Address: 01d45080
// Size: 604 bytes
// Class: Unknown


void FUN_01d45080(void)

{
  undefined8 *puVar1;
  double dVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  lVar8 = unaff_RSI[8];
  if (lVar8 == 0) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_026a7ac8;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    (*DAT_026a7ae0)();
    puVar1 = (undefined8 *)unaff_RSI[8];
    if (puVar1 == puVar5) {
      FUN_00d50b20();
    }
    else {
      unaff_RSI[8] = (longlong)puVar5;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01d448b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01e9d9f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    _objc_alloc();
    puVar3 = PTR__objc_msgSend_024a9998;
    (*(code *)PTR__objc_msgSend_024a9998)();
    dVar2 = (double)(*(code *)puVar3)();
    (*(code *)PTR__objc_release_024a99a0)();
    FUN_01e9da50((float)dVar2);
    _objc_alloc();
    (*(code *)puVar3)();
    (*(code *)puVar3)();
    uVar6 = (*(code *)puVar3)((undefined8 *)unaff_RSI[2],*(undefined8 *)unaff_RSI[2]);
    bVar4 = (byte)uVar6 << 4 | (byte)uVar6 >> 4;
    uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),bVar4) & 0xffffffffffffffcc;
    uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 2 | (bVar4 & 0x33) << 2) & 0xffffffff;
    (*(code *)PTR__objc_release_024a99a0)
              (unaff_RSI[2],CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 1));
    FUN_01e9dcc0();
    (**(code **)(*unaff_RSI + 0x148))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01e9dce0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = unaff_RSI[8];
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


