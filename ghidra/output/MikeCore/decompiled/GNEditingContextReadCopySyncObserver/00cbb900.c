// Function: FUN_00cbb900
// Address: 00cbb900
// Size: 1245 bytes
// Class: GNEditingContextReadCopySyncObserver
// String references:
//   "GNEditingContextReadCopySyncObserver"


/* WARNING: Removing unreachable block (ram,0x00cbba02) */
/* WARNING: Removing unreachable block (ram,0x00cbba17) */
/* WARNING: Removing unreachable block (ram,0x00cbba1c) */
/* WARNING: Removing unreachable block (ram,0x00cbba24) */
/* WARNING: Removing unreachable block (ram,0x00cbba30) */
/* WARNING: Removing unreachable block (ram,0x00cbba38) */
/* WARNING: Removing unreachable block (ram,0x00cbba41) */
/* WARNING: Removing unreachable block (ram,0x00cbba49) */
/* WARNING: Removing unreachable block (ram,0x00cbba5e) */
/* WARNING: Removing unreachable block (ram,0x00cbba63) */
/* WARNING: Removing unreachable block (ram,0x00cbba6b) */
/* WARNING: Removing unreachable block (ram,0x00cbba70) */
/* WARNING: Removing unreachable block (ram,0x00cbba78) */
/* WARNING: Removing unreachable block (ram,0x00cbbad4) */
/* WARNING: Removing unreachable block (ram,0x00cbbae0) */
/* WARNING: Removing unreachable block (ram,0x00cbba7d) */
/* WARNING: Removing unreachable block (ram,0x00cbba86) */
/* WARNING: Removing unreachable block (ram,0x00cbba8e) */
/* WARNING: Removing unreachable block (ram,0x00cbbab6) */
/* WARNING: Removing unreachable block (ram,0x00cbbaf2) */
/* WARNING: Removing unreachable block (ram,0x00cbbbc2) */
/* WARNING: Removing unreachable block (ram,0x00cbbafb) */
/* WARNING: Removing unreachable block (ram,0x00cbbabc) */
/* WARNING: Removing unreachable block (ram,0x00cbbac0) */
/* WARNING: Removing unreachable block (ram,0x00cbbad2) */
/* WARNING: Removing unreachable block (ram,0x00cbbb1d) */
/* WARNING: Removing unreachable block (ram,0x00cbbb29) */
/* WARNING: Removing unreachable block (ram,0x00cbbb2f) */
/* WARNING: Removing unreachable block (ram,0x00cbbb34) */
/* WARNING: Removing unreachable block (ram,0x00cbbb39) */
/* WARNING: Removing unreachable block (ram,0x00cbbb3f) */
/* WARNING: Removing unreachable block (ram,0x00cbbb48) */
/* WARNING: Removing unreachable block (ram,0x00cbbb4d) */
/* WARNING: Removing unreachable block (ram,0x00cbbb52) */
/* WARNING: Removing unreachable block (ram,0x00cbbbcf) */
/* WARNING: Removing unreachable block (ram,0x00cbbbd8) */
/* WARNING: Removing unreachable block (ram,0x00cbb9a6) */
/* WARNING: Removing unreachable block (ram,0x00cbb9ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cbb900(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  iVar2 = FUN_00d36e20();
  if (iVar2 == 1) {
    FUN_00cb1fa0();
    cVar1 = (**(code **)(*unaff_RDI + 0x518))();
    if (cVar1 != '\0') {
      local_50 = '\0';
      local_58 = 0;
      FUN_00da5ad0();
      FUN_00da7170();
      FUN_00da7180();
      if (local_68 != 0) {
        cVar1 = (**(code **)(*unaff_RDI + 0x520))();
        if (cVar1 == '\0') {
          (**(code **)(*unaff_RDI + 0x528))();
          FUN_00cb1fa0();
        }
        FUN_00da7180();
        if ((local_68 != 0) && (local_60 != '\0')) {
          FUN_00d50b20();
        }
      }
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x368))();
      lVar3 = unaff_RDI[0x28];
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar5 * 8);
          if ((DAT_026d1090 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            _DAT_027ab030 = "GNEditingContextReadCopySyncObserver";
            DAT_027ab040 = 0;
            _DAT_027ab038 = 0;
            ___cxa_guard_release();
          }
          if (plVar4 == (longlong *)0x0) {
            lVar3 = 0;
          }
          else {
            (**(code **)(*plVar4 + 0x360))();
            lVar3 = FUN_00e86120();
          }
          FUN_00d50b00();
          (**(code **)(*(longlong *)((longlong)plVar4 + lVar3) + 0x18))();
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          lVar3 = unaff_RDI[0x28];
        } while (lVar5 < *(int *)(lVar3 + 0xc));
      }
      (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x378))();
    }
    if (0 < (int)unaff_RDI[0x2a]) {
      FUN_00cbbfd0();
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      FUN_00da5ad0();
      cVar1 = *(char *)(local_58 + 0x18);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        FUN_00cb2d80();
      }
    }
    if (unaff_RDI[0x11] != 0) {
      unaff_RDI[0x11] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 1000))();
  }
  iVar2 = *(int *)((longlong)unaff_RDI + 0xe4);
  if (iVar2 < 1) {
    iVar2 = (int)unaff_RDI[0x1d];
    if (iVar2 < 1) goto LAB_00cbbdba;
    plVar4 = unaff_RDI + 0x1d;
  }
  else {
    plVar4 = (longlong *)((longlong)unaff_RDI + 0xe4);
  }
  *(int *)plVar4 = iVar2 + -1;
LAB_00cbbdba:
  (**(code **)(*(longlong *)unaff_RDI[0x1b] + 0x378))();
  return;
}


