// Function: FUN_01c44700
// Address: 01c44700
// Size: 1229 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c44b77) */
/* WARNING: Removing unreachable block (ram,0x01c44b80) */
/* WARNING: Removing unreachable block (ram,0x01c44bce) */
/* WARNING: Removing unreachable block (ram,0x01c44bd7) */
/* WARNING: Removing unreachable block (ram,0x01c44a9b) */
/* WARNING: Removing unreachable block (ram,0x01c44aa8) */

void FUN_01c44700(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        lVar3 = local_40;
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_01507970();
          dVar9 = (double)FUN_016c98e0(uVar8,0);
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_01507970();
          dVar10 = (double)FUN_016c98e0(uVar8,0);
          if ((dVar9 != dVar10) || (NAN(dVar9) || NAN(dVar10))) {
LAB_01c44b5c:
            local_38 = '\0';
            FUN_00d21140();
            local_40 = lVar2;
          }
          else {
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_01508610();
            dVar9 = (double)FUN_016c98e0(uVar8,0);
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_01508610();
            dVar10 = (double)FUN_016c98e0(uVar8,0);
            if ((dVar9 != dVar10) || (NAN(dVar9) || NAN(dVar10))) goto LAB_01c44b5c;
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  FUN_00e7bdb0();
  FUN_01287c80();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


