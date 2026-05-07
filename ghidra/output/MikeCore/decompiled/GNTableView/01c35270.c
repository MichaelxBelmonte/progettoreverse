// Function: FUN_01c35270
// Address: 01c35270
// Size: 819 bytes
// Class: GNTableView


/* WARNING: Removing unreachable block (ram,0x01c3549b) */
/* WARNING: Removing unreachable block (ram,0x01c354a4) */
/* WARNING: Removing unreachable block (ram,0x01c353ca) */
/* WARNING: Removing unreachable block (ram,0x01c353d3) */
/* WARNING: Removing unreachable block (ram,0x01c3556e) */
/* WARNING: Removing unreachable block (ram,0x01c35577) */
/* WARNING: Removing unreachable block (ram,0x01c352c5) */
/* WARNING: Removing unreachable block (ram,0x01c352ce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c35270(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *local_40;
  char local_38;
  
  fVar6 = (float)param_2;
  fVar4 = (float)param_1;
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*unaff_RDI + 0xaf0))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*unaff_RDI + 0xb18))();
    fVar8 = (float)((ulonglong)param_2 >> 0x20) * _UNK_023945d4;
    fVar7 = fVar6 * _DAT_023945d0 + fVar4;
    if (cVar2 == '\0') {
      FUN_00d05530(fVar4,fVar6,DAT_02390d00);
      (**(code **)(*local_40 + 0x3f0))(5,1,0,1);
      (**(code **)(*local_40 + 0x490))(1,1,0);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00d05570(fVar7,DAT_023b1608);
      FUN_01cb3a30(uVar5,DAT_02390d2c);
    }
    else {
      FUN_01c35c30();
    }
    cVar2 = (**(code **)(*unaff_RDI + 0xb18))();
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*unaff_RDI + 0xb20))();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
      (*DAT_02680418)();
      FUN_01d39310(fVar7,fVar8 + (float)((ulonglong)param_1 >> 0x20),DAT_02390d30,
                   (float)dVar1 * _DAT_0241e850 + DAT_0241e854);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = (**(code **)(*unaff_RDI + 0xaf8))();
    FUN_01c35730(uVar5,fVar4,fVar6);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


