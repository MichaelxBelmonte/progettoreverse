// Function: FUN_01f37e20
// Address: 01f37e20
// Size: 655 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f3807f) */
/* WARNING: Removing unreachable block (ram,0x01f38088) */
/* WARNING: Removing unreachable block (ram,0x01f37f13) */
/* WARNING: Removing unreachable block (ram,0x01f37f18) */
/* WARNING: Removing unreachable block (ram,0x01f37ea0) */
/* WARNING: Removing unreachable block (ram,0x01f37ea9) */
/* WARNING: Removing unreachable block (ram,0x01f37e70) */
/* WARNING: Removing unreachable block (ram,0x01f37e79) */
/* WARNING: Removing unreachable block (ram,0x01f37ed1) */
/* WARNING: Removing unreachable block (ram,0x01f37eda) */
/* WARNING: Removing unreachable block (ram,0x01f37fac) */
/* WARNING: Removing unreachable block (ram,0x01f37fb1) */
/* WARNING: Removing unreachable block (ram,0x01f37fd3) */
/* WARNING: Removing unreachable block (ram,0x01f37fdc) */
/* WARNING: Removing unreachable block (ram,0x01f38093) */
/* WARNING: Removing unreachable block (ram,0x01f3809c) */
/* WARNING: Removing unreachable block (ram,0x01f3800d) */
/* WARNING: Removing unreachable block (ram,0x01f3801a) */

void FUN_01f37e20(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  if (*unaff_RSI != 0) {
    while (cVar3 = FUN_00d23d70(), cVar3 != '\0') {
      FUN_00d23f50();
    }
    lVar2 = *unaff_RSI;
    FUN_00d23370();
    iVar1 = *(int *)(unaff_RDI[0xd] + 0xc);
    while (0x14 < iVar1) {
      FUN_00d23740();
      iVar1 = *(int *)(unaff_RDI[0xd] + 0xc);
    }
    FUN_00d6f370();
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar5 = unaff_RDI[0xd];
      if (0 < *(int *)(lVar5 + 0xc)) {
        lVar6 = 0;
        do {
          (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8) + 0x368))();
          if (lVar2 != 0) {
            FUN_00d50b00();
            FUN_00d21140();
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          lVar5 = unaff_RDI[0xd];
        } while (lVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_00d6f370();
      lVar2 = DAT_027fffd0;
      if (DAT_027fffd0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d6f570();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x4b0))();
  }
  return;
}


