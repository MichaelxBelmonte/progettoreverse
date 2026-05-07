// Function: FUN_012c5850
// Address: 012c5850
// Size: 956 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012c5961) */
/* WARNING: Removing unreachable block (ram,0x012c5a12) */
/* WARNING: Removing unreachable block (ram,0x012c5bdd) */
/* WARNING: Removing unreachable block (ram,0x012c5be6) */
/* WARNING: Removing unreachable block (ram,0x012c5a69) */
/* WARNING: Removing unreachable block (ram,0x012c5a75) */
/* WARNING: Removing unreachable block (ram,0x012c5aeb) */
/* WARNING: Removing unreachable block (ram,0x012c5af7) */
/* WARNING: Removing unreachable block (ram,0x012c5b2e) */
/* WARNING: Removing unreachable block (ram,0x012c5b37) */
/* WARNING: Removing unreachable block (ram,0x012c5bf5) */
/* WARNING: Removing unreachable block (ram,0x012c5c02) */
/* WARNING: Removing unreachable block (ram,0x012c5a2f) */

void FUN_012c5850(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  lVar7 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  plVar8 = *(longlong **)(lVar7 + 0x48);
  if (plVar8 == (longlong *)0x0) {
    FUN_012c55d0();
    if (local_40 == (longlong *)0x0) {
      return;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_014320a0();
    local_48 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      bVar2 = false;
      if (local_38 != '\0') {
        bVar2 = false;
        plVar8 = (longlong *)0x0;
      }
    }
    else {
      plVar8 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
LAB_012c59f7:
        bVar2 = true;
      }
    }
    FUN_01432160();
    iVar4 = FUN_014321d0();
    if (iVar4 == 0) {
      FUN_012ddc30();
      (**(code **)(*local_40 + 0x6a8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23d90();
      if (*(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc) == 0) {
        FUN_012ddc30();
        FUN_00d50b00();
        FUN_0142fc50();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
    bVar1 = false;
    bVar3 = false;
    if (!bVar2) goto LAB_012c5b61;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc) < 1) {
LAB_012c59ff:
      local_48 = (longlong *)0x0;
      bVar3 = true;
    }
    else {
      local_48 = (longlong *)0x0;
      lVar7 = 0;
      do {
        FUN_014320a0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == plVar8) {
          local_48 = *(longlong **)
                      (*(longlong *)(*(longlong *)(unaff_RDI + 0xf0) + 0x10) + lVar7 * 8);
          if (local_48 == (longlong *)0x0) goto LAB_012c59ff;
          FUN_00d50b00();
          goto LAB_012c59f7;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(*(longlong *)(unaff_RDI + 0xf0) + 0xc));
      bVar3 = true;
    }
  }
  bVar1 = bVar3;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_012c5b61:
  if (!bVar1 && local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


