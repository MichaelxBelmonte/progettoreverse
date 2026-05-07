// Function: FUN_012eb1d0
// Address: 012eb1d0
// Size: 1022 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012eb58a) */
/* WARNING: Removing unreachable block (ram,0x012eb597) */
/* WARNING: Removing unreachable block (ram,0x012eb5ee) */
/* WARNING: Removing unreachable block (ram,0x012eb5fb) */
/* WARNING: Removing unreachable block (ram,0x012eb339) */
/* WARNING: Removing unreachable block (ram,0x012eb346) */
/* WARNING: Removing unreachable block (ram,0x012eb4e3) */
/* WARNING: Removing unreachable block (ram,0x012eb4ec) */

undefined8 * FUN_012eb1d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  longlong lVar8;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x58) == 0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      if (0 < *(int *)(local_70 + 0xc)) {
        iVar7 = 0;
        do {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_012eb500;
            }
          }
          else if (local_40 != 0) {
LAB_012eb500:
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == unaff_RSI) {
              local_38 = '\0';
              FUN_00d235a0();
            }
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_70 + 0xc));
      }
      FUN_0015edf0();
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RSI + 0xb0);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar8 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar3 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar3) {
            local_38 = '\0';
            FUN_00d235a0();
            local_40 = lVar2;
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_001159b0();
    }
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


