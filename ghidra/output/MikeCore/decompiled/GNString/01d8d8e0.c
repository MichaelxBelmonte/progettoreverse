// Function: FUN_01d8d8e0
// Address: 01d8d8e0
// Size: 1227 bytes
// Class: GNString
// String references:
//   "%@ is not able to be resized"
//   "%@ is not able to be resized due to the windows min content size."


/* WARNING: Removing unreachable block (ram,0x01d8d98d) */
/* WARNING: Removing unreachable block (ram,0x01d8d999) */
/* WARNING: Removing unreachable block (ram,0x01d8d9a7) */
/* WARNING: Removing unreachable block (ram,0x01d8d9b3) */

void FUN_01d8d8e0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *unaff_RDI;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float local_118;
  float fStack_114;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined1 local_31;
  
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  fVar13 = (float)param_2;
  local_31 = (**(code **)(*unaff_RDI + 0x578))();
  (**(code **)(*unaff_RDI + 0x570))();
  fVar1 = *(float *)((longlong)unaff_RDI + 0x114);
  fVar2 = *(float *)(unaff_RDI + 0x23);
  FUN_01e3cf70();
  fVar9 = *(float *)((longlong)unaff_RDI + 0x114);
  fVar8 = *(float *)(unaff_RDI + 0x23);
  *(float *)((longlong)unaff_RDI + 0x114) = fVar1;
  *(float *)(unaff_RDI + 0x23) = fVar2;
  lVar5 = DAT_027f1438;
  lVar3 = unaff_RDI[3];
  if (lVar3 == 0) {
    if (DAT_027f1438 != 0) {
      FUN_00d50b00();
    }
    uVar10 = (**(code **)(*unaff_RDI + 400))();
    local_58 = local_48;
    local_60 = 1;
    local_68 = &DAT_024c5048;
    local_50 = 0;
    if (local_48 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_50 = '\x01';
    FUN_00cc7b40(uVar10,&local_68);
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar4 = true;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    bVar4 = false;
  }
  FUN_01e3f820();
  uVar10 = FUN_01e59080();
  fVar8 = fVar8 - fVar2;
  if ((((fVar8 != 0.0) || (NAN(fVar8))) &&
      (cVar7 = FUN_01e5c7d0(), lVar5 = DAT_027f1438, cVar7 != '\0')) &&
     (fStack_114 = (float)((ulonglong)uVar10 >> 0x20), fVar8 + fVar14 < fStack_114)) {
    if (DAT_027f1438 != 0) {
      FUN_00d50b00();
    }
    uVar11 = (**(code **)(*unaff_RDI + 400))();
    lVar6 = local_48;
    local_60 = 1;
    local_68 = &DAT_024c5048;
    local_50 = 0;
    if (local_48 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_58 = lVar6;
    local_50 = '\x01';
    FUN_00cc7b40(uVar11,&local_68);
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  fVar9 = fVar9 - fVar1;
  if ((((fVar9 != DAT_0239424c) || (NAN(fVar9) || NAN(DAT_0239424c))) &&
      (cVar7 = FUN_01e5c720(), lVar5 = DAT_027f1438, cVar7 != '\0')) &&
     (local_118 = (float)uVar10, fVar9 + fVar13 < local_118)) {
    if (DAT_027f1438 != 0) {
      FUN_00d50b00();
    }
    uVar10 = (**(code **)(*unaff_RDI + 400))();
    lVar6 = local_48;
    local_60 = 1;
    local_68 = &DAT_024c5048;
    local_50 = 0;
    if (local_48 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_58 = lVar6;
    local_50 = '\x01';
    FUN_00cc7b40(uVar10,&local_68);
    local_68 = &DAT_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  cVar7 = FUN_01e4ce30();
  auVar12 = insertps(ZEXT416((uint)(fVar9 + fVar13)),ZEXT416((uint)(fVar8 + fVar14)),0x10);
  if (cVar7 == '\0') {
    FUN_01e5bc80();
  }
  else {
    FUN_01e59fd0(auVar12._0_8_);
  }
  (**(code **)(*unaff_RDI + 0x570))();
  if (lVar3 != 0 && !bVar4) {
    FUN_00d50b20();
  }
  return;
}


