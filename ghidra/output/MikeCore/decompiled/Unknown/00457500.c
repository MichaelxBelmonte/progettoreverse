// Function: FUN_00457500
// Address: 00457500
// Size: 1005 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0045773a) */
/* WARNING: Removing unreachable block (ram,0x00457746) */
/* WARNING: Removing unreachable block (ram,0x00457838) */
/* WARNING: Removing unreachable block (ram,0x004577de) */
/* WARNING: Removing unreachable block (ram,0x004577eb) */
/* WARNING: Removing unreachable block (ram,0x004577ac) */
/* WARNING: Removing unreachable block (ram,0x004577b9) */
/* WARNING: Removing unreachable block (ram,0x004578b6) */
/* WARNING: Removing unreachable block (ram,0x004578c6) */
/* WARNING: Removing unreachable block (ram,0x00457772) */
/* WARNING: Removing unreachable block (ram,0x0045777f) */
/* WARNING: Removing unreachable block (ram,0x00457870) */
/* WARNING: Removing unreachable block (ram,0x0045787c) */
/* WARNING: Removing unreachable block (ram,0x00457890) */
/* WARNING: Removing unreachable block (ram,0x004578a4) */

undefined8 * FUN_00457500(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong local_c0;
  char local_b8;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        FUN_01f27fe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_000e2730();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_0052f190();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            FUN_00457bc0();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if (local_40 == 0) {
              FUN_0039e8b0();
              if (local_38 != '\0') {
                local_38 = '\0';
              }
              FUN_00457c70();
            }
            else {
              local_38 = '\0';
              FUN_00d21140();
              FUN_00d50b20();
              local_40 = lVar2;
            }
          }
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


