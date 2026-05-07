// Function: FUN_01a21920
// Address: 01a21920
// Size: 781 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a21c16) */
/* WARNING: Removing unreachable block (ram,0x01a21c23) */
/* WARNING: Removing unreachable block (ram,0x01a21961) */
/* WARNING: Removing unreachable block (ram,0x01a2196a) */

void FUN_01a21920(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *unaff_RDI;
  bool bVar7;
  longlong *local_b8;
  char local_b0;
  longlong *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02709dd0;
  if (DAT_02709dd0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*local_38 + 0x50))();
  lVar2 = DAT_027e1450;
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    if (DAT_027e1450 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    lVar3 = DAT_027e3bc0;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (DAT_027e3bc0 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_38 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fc738;
  if (cVar5 == '\0') {
    if (DAT_026fc738 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_026fce70;
    if (cVar4 == '\0') {
      if (DAT_026fce70 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_38 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027e13d8;
      if (cVar4 == '\0') {
        if (DAT_027e13d8 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*local_38 + 0x50))();
        if (cVar4 == '\0') {
          bVar7 = false;
        }
        else {
          FUN_00d3ecf0();
          FUN_01a1d6e0();
          bVar7 = local_38 == local_b8;
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (bVar7) {
          (**(code **)(*unaff_RDI + 0x958))();
          (**(code **)(*unaff_RDI + 0x620))();
        }
      }
      else {
        (**(code **)(*unaff_RDI + 0x620))();
      }
      FUN_00d530a0();
    }
    else {
      iVar6 = FUN_01a1dbe0();
      if (iVar6 != (int)unaff_RDI[0x29]) {
        *(int *)(unaff_RDI + 0x29) = iVar6;
        (**(code **)(*unaff_RDI + 0x620))();
      }
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x620))();
  }
  FUN_00d50b20();
  return;
}


