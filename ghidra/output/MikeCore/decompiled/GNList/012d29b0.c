// Function: FUN_012d29b0
// Address: 012d29b0
// Size: 1206 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x012d2e18) */
/* WARNING: Removing unreachable block (ram,0x012d2e0f) */
/* WARNING: Removing unreachable block (ram,0x012d2d81) */
/* WARNING: Removing unreachable block (ram,0x012d2d8a) */
/* WARNING: Removing unreachable block (ram,0x012d2a48) */
/* WARNING: Removing unreachable block (ram,0x012d2a51) */
/* WARNING: Removing unreachable block (ram,0x012d2d2b) */
/* WARNING: Removing unreachable block (ram,0x012d2da2) */
/* WARNING: Removing unreachable block (ram,0x012d2da7) */
/* WARNING: Removing unreachable block (ram,0x012d2e40) */
/* WARNING: Removing unreachable block (ram,0x012d2e49) */

void FUN_012d29b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RDI;
  
  FUN_00b341c0();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_012dc5a0();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = unaff_RDI[0x1f];
  lVar2 = plVar4[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar4[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = unaff_RDI[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d243f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1f] != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    lVar2 = plVar4[4];
    if (lVar2 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      plVar4[4] = lVar6;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_012d0a00();
  }
  plVar3 = (longlong *)unaff_RDI[0x2e];
  if (plVar3 != plVar4) {
    FUN_00d50b00();
    unaff_RDI[0x2e] = (longlong)plVar4;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((unaff_RDI[0x1f] != 0) && (plVar4[4] != 0)) {
    FUN_00cbceb0();
    (**(code **)(unaff_RDI[0x1e] + 0x10))();
    FUN_00d50b00();
    FUN_00cbc2c0();
    if (unaff_RDI + 0x1e != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x1e] + 0x10))();
      FUN_00d50b20();
    }
  }
  plVar4 = (longlong *)unaff_RDI[0x22];
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0x3b8))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_012dd9b0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x22] + 0x368))();
  if (*(longlong *)(unaff_RDI[0x22] + 0x100) != 0) {
    FUN_00b33120();
    FUN_00c8e7d0();
    FUN_00c8e340();
  }
  plVar4 = (longlong *)unaff_RDI[0x23];
  FUN_00b335d0();
  (**(code **)(*plVar4 + 0x398))();
  FUN_00b33590();
  FUN_00b335a0();
  FUN_00b33590();
  FUN_00b33530();
  plVar4 = (longlong *)unaff_RDI[0x23];
  (**(code **)(*unaff_RDI + 0x3a8))();
  (**(code **)(*plVar4 + 0x3a0))();
  (**(code **)(*(longlong *)unaff_RDI[0x23] + 0x368))();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02581c90;
  (*DAT_02581ca8)();
  lVar2 = unaff_RDI[0x42];
  unaff_RDI[0x42] = (longlong)puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00b33760();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b33790();
  FUN_012cf0c0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  if (lVar1 != 0) {
    FUN_01f27fe0();
    (**(code **)(unaff_RDI[0x1d] + 0x10))();
    FUN_00d50b00();
    FUN_01f47190();
    if (unaff_RDI + 0x1d != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x1d] + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


