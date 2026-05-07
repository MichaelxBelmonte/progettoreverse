// Function: FUN_01290750
// Address: 01290750
// Size: 1585 bytes
// Class: MUAudioSourceAttackItem


/* WARNING: Removing unreachable block (ram,0x01290d26) */
/* WARNING: Removing unreachable block (ram,0x01290d2f) */
/* WARNING: Removing unreachable block (ram,0x01290d4f) */
/* WARNING: Removing unreachable block (ram,0x01290d58) */
/* WARNING: Removing unreachable block (ram,0x012907d1) */
/* WARNING: Removing unreachable block (ram,0x012907da) */
/* WARNING: Removing unreachable block (ram,0x01290917) */
/* WARNING: Removing unreachable block (ram,0x01290940) */
/* WARNING: Removing unreachable block (ram,0x01290919) */
/* WARNING: Removing unreachable block (ram,0x01290942) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01290750(double param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_68;
  char local_60;
  int local_50;
  
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  plVar5 = (longlong *)*unaff_RSI;
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    plVar5 = (longlong *)*unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  pVar7 = 0;
  dVar10 = (double)(**(code **)(*plVar5 + 0x380))(param_1);
  plVar5 = (longlong *)FUN_011114e0();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ef430(_DAT_02391038,_DAT_02391038);
  if (local_68 == 0) {
    bVar1 = false;
    plVar6 = (longlong *)0x0;
  }
  else {
    local_50 = -1;
    bVar1 = false;
    plVar6 = (longlong *)0x0;
    while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
      plVar8 = *(longlong **)(local_68 + 0x10);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faed0();
      pVar7 = (pthread_key_t)plVar8;
      if (param_1 <= dVar11) {
        if (plVar6 == (longlong *)0x0) {
          pvVar2 = _pthread_getspecific(pVar7);
          plVar6 = plVar5;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = plVar5;
            plVar6 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          pVar7 = (pthread_key_t)plVar8;
          (**(code **)(*plVar6 + 0x418))(param_1,dVar10);
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          plVar6 = (longlong *)FUN_011114e0();
          (**(code **)(*plVar6 + 0x18))();
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013ef430(_DAT_02391038,_DAT_02391038);
          pvVar2 = _pthread_getspecific(pVar7);
          plVar8 = plVar6;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x418))(0,0);
          bVar1 = true;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar2 = _pthread_getspecific(pVar7);
        plVar8 = plVar6;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        (**(code **)(*plVar8 + 0x418))(dVar11 - param_1,dVar14 - dVar10);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar7);
        plVar9 = plVar5;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = plVar5;
          plVar9 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pVar7 = (pthread_key_t)plVar8;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013faf20();
        (**(code **)(*plVar9 + 0x418))(uVar12,uVar13);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
  }
  FUN_00d21140();
  FUN_00d21140();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


