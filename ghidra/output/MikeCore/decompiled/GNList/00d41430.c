// Function: FUN_00d41430
// Address: 00d41430
// Size: 642 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d415e2) */
/* WARNING: Removing unreachable block (ram,0x00d415eb) */
/* WARNING: Removing unreachable block (ram,0x00d4149a) */
/* WARNING: Removing unreachable block (ram,0x00d414a3) */
/* WARNING: Removing unreachable block (ram,0x00d415ce) */
/* WARNING: Removing unreachable block (ram,0x00d415d7) */
/* WARNING: Removing unreachable block (ram,0x00d41665) */
/* WARNING: Removing unreachable block (ram,0x00d4166e) */
/* WARNING: Removing unreachable block (ram,0x00d41563) */
/* WARNING: Removing unreachable block (ram,0x00d41570) */

void FUN_00d41430(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x368))();
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d41542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
    return;
  }
  FUN_00d40f90();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d417f0();
  }
  else {
    uVar3 = *(uint *)(local_40 + 0xc);
    if (0 < (int)uVar3) {
      lVar4 = (ulonglong)uVar3 + 1;
      do {
        uVar3 = uVar3 - 1;
        lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar3 * 8);
        if (*(longlong *)(lVar1 + 0x10) == *unaff_RSI) {
          if ((*(longlong *)(lVar1 + 0x18) == *param_1) || (*(longlong *)(lVar1 + 0x18) == 0)) {
            (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
            goto LAB_00d41692;
          }
          if (*param_1 == 0) {
            *(undefined1 *)(lVar1 + 0xc) = 0;
            FUN_00d23620();
            *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + -1;
          }
        }
        lVar4 = lVar4 + -1;
      } while (1 < lVar4);
    }
  }
  FUN_00d3f2c0();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x40) = *(int *)(unaff_RDI + 0x40) + 1;
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
LAB_00d41692:
  FUN_00d50b20();
  return;
}


