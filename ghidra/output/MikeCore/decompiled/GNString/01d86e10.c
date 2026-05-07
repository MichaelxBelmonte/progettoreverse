// Function: FUN_01d86e10
// Address: 01d86e10
// Size: 710 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d870b0) */
/* WARNING: Removing unreachable block (ram,0x01d870b9) */
/* WARNING: Removing unreachable block (ram,0x01d86e7a) */
/* WARNING: Removing unreachable block (ram,0x01d86e83) */

void FUN_01d86e10(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong *local_38;
  char local_30;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar9 = (float)param_2;
  fVar10 = fVar9;
  if ((unaff_RDI[3] != 0) && (uVar3 = FUN_01e59f30(), (uVar3 & 0x400) != 0)) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_38 + 0x650))();
  if (cVar2 == '\0') goto LAB_01d87024;
  if (unaff_RDI[0x2c] != 0) {
    uVar8 = FUN_01d526f0();
    FUN_01e3f820();
    if ((((float)uVar8 != fVar10) || (NAN((float)uVar8) || NAN(fVar10))) ||
       ((float)((ulonglong)uVar8 >> 0x20) != fVar11)) {
      lVar5 = 0;
      if (unaff_RDI[0x2c] != 0) {
        unaff_RDI[0x2c] = 0;
        FUN_00d50b20();
        goto LAB_01d86ef1;
      }
    }
    else {
LAB_01d86ef1:
      lVar5 = unaff_RDI[0x2c];
    }
    if (lVar5 != 0) goto LAB_01d87024;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x2c];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2c] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01e3f820();
  FUN_01d4ed60(fVar10);
  FUN_01d52700();
  FUN_01d52740();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  uVar6 = FUN_01e3f820();
  fVar11 = fVar10;
  uVar7 = FUN_01e3f820();
  (**(code **)(*local_38 + 0x410))(uVar6,fVar10,uVar7,fVar11);
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
LAB_01d87024:
  lVar5 = unaff_RDI[0x2c];
  if (lVar5 == 0) {
    FUN_01e3f820();
    (**(code **)(*local_38 + 0x410))();
  }
  else {
    plVar1 = (longlong *)*unaff_RSI;
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x408))(param_1,fVar9,param_1);
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


