// Function: FUN_016d8330
// Address: 016d8330
// Size: 1070 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x016d8559) */
/* WARNING: Removing unreachable block (ram,0x016d8562) */
/* WARNING: Removing unreachable block (ram,0x016d8465) */
/* WARNING: Removing unreachable block (ram,0x016d8435) */
/* WARNING: Removing unreachable block (ram,0x016d8405) */
/* WARNING: Removing unreachable block (ram,0x016d83d5) */
/* WARNING: Removing unreachable block (ram,0x016d83cc) */
/* WARNING: Removing unreachable block (ram,0x016d83fc) */
/* WARNING: Removing unreachable block (ram,0x016d842c) */
/* WARNING: Removing unreachable block (ram,0x016d845c) */
/* WARNING: Removing unreachable block (ram,0x016d84cb) */
/* WARNING: Removing unreachable block (ram,0x016d84d4) */
/* WARNING: Removing unreachable block (ram,0x016d86b5) */
/* WARNING: Removing unreachable block (ram,0x016d86be) */

void FUN_016d8330(undefined *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined *puVar7;
  longlong unaff_RDI;
  char cVar8;
  longlong local_58;
  char local_50;
  undefined *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x88) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = &DAT_02572358;
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    lVar5 = *(longlong *)(unaff_RDI + 0x88);
    *(undefined8 **)(unaff_RDI + 0x88) = puVar2;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_00d227d0();
    FUN_00d21140();
    FUN_00d21140();
    FUN_00d21140();
    local_40 = (undefined *)0x0;
    local_38 = '\0';
    FUN_00d21140();
  }
  FUN_00d50b00();
  FUN_016cbba0();
  if ((local_38 == '\0') && (local_40 != (undefined *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d50b20();
  FUN_00d233f0();
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    lVar5 = *(longlong *)(unaff_RDI + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    iVar1 = FUN_00d237a0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    puVar7 = local_40;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = local_40;
      puVar7 = *(undefined **)(local_40 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8 + 0x20);
    }
    pVar6 = (pthread_key_t)param_1;
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      pVar6 = (pthread_key_t)local_40;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    lVar4 = *(longlong *)(lVar5 + (longlong)iVar1 * 8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pVar6 = (pthread_key_t)lVar5;
    if (*(longlong *)(puVar7 + 0x78) != lVar4) {
      FUN_00d64850();
      lVar5 = *(longlong *)(puVar7 + 0x78);
      if (lVar5 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(puVar7 + 0x78) = lVar4;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      cVar8 = *(char *)(unaff_RDI + 0x80);
      puVar7 = local_40;
      if (local_40[0x80] == cVar8) goto LAB_016d8741;
    }
    else {
      cVar8 = *(char *)(unaff_RDI + 0x80);
      puVar7 = *(undefined **)(local_40 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
      if ((*(undefined **)(local_40 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20))[0x80]
          == cVar8) goto LAB_016d8741;
    }
    FUN_00d64850();
    puVar7[0x80] = cVar8;
    FUN_00d64910();
  }
LAB_016d8741:
  if (local_40 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  return;
}


