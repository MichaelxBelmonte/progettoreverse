// Function: FUN_01e5d9c0
// Address: 01e5d9c0
// Size: 1055 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e5dd95) */
/* WARNING: Removing unreachable block (ram,0x01e5dd9e) */
/* WARNING: Removing unreachable block (ram,0x01e5dc2d) */
/* WARNING: Removing unreachable block (ram,0x01e5dc39) */
/* WARNING: Removing unreachable block (ram,0x01e5db59) */
/* WARNING: Removing unreachable block (ram,0x01e5db7d) */
/* WARNING: Removing unreachable block (ram,0x01e5db86) */
/* WARNING: Removing unreachable block (ram,0x01e5daaf) */
/* WARNING: Removing unreachable block (ram,0x01e5dab8) */
/* WARNING: Removing unreachable block (ram,0x01e5db0b) */
/* WARNING: Removing unreachable block (ram,0x01e5db14) */
/* WARNING: Removing unreachable block (ram,0x01e5dbbc) */
/* WARNING: Removing unreachable block (ram,0x01e5dbc5) */
/* WARNING: Removing unreachable block (ram,0x01e5dcad) */
/* WARNING: Removing unreachable block (ram,0x01e5dcb9) */
/* WARNING: Removing unreachable block (ram,0x01e5ddbf) */
/* WARNING: Removing unreachable block (ram,0x01e5ddc8) */

void FUN_01e5d9c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  
  puVar1 = PTR__objc_msgSend_024a9998;
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar9 = (float)param_2;
  cVar2 = (*(code *)PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  (*(code *)puVar1)();
  lVar4 = (*(code *)puVar1)();
  cVar3 = (*(code *)puVar1)();
  if (lVar4 == 0) {
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,0);
  }
  else if (cVar3 != '\0') {
    (*(code *)PTR__objc_msgSend_024a9998)();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  FUN_01e58640();
  lVar4 = local_60;
  FUN_00d50b00();
  cVar3 = FUN_00d23d70();
  FUN_00d50b20();
  if ((local_58 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_01e58640();
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (cVar2 == '\0') {
    if (unaff_RDI[3] == 0) {
      FUN_01f50d20();
    }
    else {
      FUN_01d907a0();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_01e5b880();
    FUN_01f514b0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_01e5b880();
    fVar10 = fVar9;
    uVar6 = FUN_01f51370();
    uVar7 = FUN_00d05360(uVar5,fVar9,uVar6,fVar10);
    fVar10 = fVar9;
    fVar12 = fVar11;
    uVar8 = FUN_01e5b880();
    if ((((((float)uVar7 != (float)uVar8) || (NAN((float)uVar7) || NAN((float)uVar8))) ||
         ((float)((ulonglong)uVar7 >> 0x20) != (float)((ulonglong)uVar8 >> 0x20))) ||
        ((fVar9 != fVar10 || (NAN(fVar9) || NAN(fVar10))))) || (fVar11 != fVar12)) {
      FUN_01f51370();
      FUN_01e5c410();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[4] + 0x498))();
  }
  FUN_00d403d0();
  lVar4 = DAT_027f0e38;
  if (DAT_027f0e38 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*unaff_RDI + 0x4b8))();
  return;
}


