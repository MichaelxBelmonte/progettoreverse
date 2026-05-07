// Function: FUN_012c3160
// Address: 012c3160
// Size: 812 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012c330e) */
/* WARNING: Removing unreachable block (ram,0x012c3313) */
/* WARNING: Removing unreachable block (ram,0x012c32b6) */
/* WARNING: Removing unreachable block (ram,0x012c31ad) */
/* WARNING: Removing unreachable block (ram,0x012c31b6) */
/* WARNING: Removing unreachable block (ram,0x012c31f4) */
/* WARNING: Removing unreachable block (ram,0x012c31fd) */
/* WARNING: Removing unreachable block (ram,0x012c3412) */
/* WARNING: Removing unreachable block (ram,0x012c341b) */
/* WARNING: Removing unreachable block (ram,0x012c3420) */

void FUN_012c3160(undefined4 param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  
  plVar1 = (longlong *)FUN_011679f0();
  (**(code **)(*plVar1 + 0x18))();
  FUN_01432090();
  FUN_01432080(param_1);
  uVar7 = FUN_01432070();
  FUN_00d23370(uVar7,0);
  unaff_RDI[0x20] = 0;
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  bVar6 = *(longlong *)(lVar4 + 0x108) != 0;
  *(bool *)(unaff_RDI + 0x1a) = bVar6;
  if (bVar6) {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015392b0();
    plVar5 = (longlong *)unaff_RDI[0x18];
    if (plVar5 != plVar1) {
      if (plVar1 == (longlong *)0x0) {
        unaff_RDI[0x18] = 0;
      }
      else {
        FUN_00d50b00();
        plVar5 = (longlong *)unaff_RDI[0x18];
        unaff_RDI[0x18] = (longlong)plVar1;
      }
      in_ECX = (pthread_key_t)plVar5;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar5 = (longlong *)unaff_RDI[0x18];
    if (plVar5 != (longlong *)0x0) {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        plVar5 = (longlong *)unaff_RDI[0x18];
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_015392f0();
      FUN_012dd9d0();
      lVar4 = *plVar5;
      (**(code **)(lVar4 + 0x370))(uVar7);
      in_ECX = (pthread_key_t)lVar4;
    }
    unaff_RDI[0x15] = 0;
    unaff_RDI[0x16] = 0;
    unaff_RDI[0x17] = 0x3ff0000000000000;
  }
  FUN_0142dbe0();
  bVar6 = plVar1 == (longlong *)0x0;
  if (bVar6) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RDI + 0x5f8))();
  FUN_012c35a0();
  if (!bVar6 && plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


