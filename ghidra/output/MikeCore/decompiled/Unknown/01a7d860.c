// Function: FUN_01a7d860
// Address: 01a7d860
// Size: 2843 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a7e224) */
/* WARNING: Removing unreachable block (ram,0x01a7e230) */
/* WARNING: Removing unreachable block (ram,0x01a7ddd4) */
/* WARNING: Removing unreachable block (ram,0x01a7dddd) */
/* WARNING: Removing unreachable block (ram,0x01a7dde2) */
/* WARNING: Removing unreachable block (ram,0x01a7d8c0) */
/* WARNING: Removing unreachable block (ram,0x01a7d8cc) */
/* WARNING: Removing unreachable block (ram,0x01a7e31b) */
/* WARNING: Removing unreachable block (ram,0x01a7e327) */
/* WARNING: Removing unreachable block (ram,0x01a7d973) */
/* WARNING: Removing unreachable block (ram,0x01a7d97c) */
/* WARNING: Removing unreachable block (ram,0x01a7d944) */
/* WARNING: Removing unreachable block (ram,0x01a7d951) */
/* WARNING: Removing unreachable block (ram,0x01a7d9e8) */
/* WARNING: Removing unreachable block (ram,0x01a7d9f1) */
/* WARNING: Removing unreachable block (ram,0x01a7daa5) */
/* WARNING: Removing unreachable block (ram,0x01a7dad0) */
/* WARNING: Removing unreachable block (ram,0x01a7debd) */
/* WARNING: Removing unreachable block (ram,0x01a7dee0) */
/* WARNING: Removing unreachable block (ram,0x01a7debf) */
/* WARNING: Removing unreachable block (ram,0x01a7dee2) */
/* WARNING: Removing unreachable block (ram,0x01a7daa7) */
/* WARNING: Removing unreachable block (ram,0x01a7dad2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a7d860(double param_1)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t in_ECX;
  pthread_key_t pVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  longlong local_60;
  char local_58;
  int local_48;
  longlong local_38;
  
  lVar2 = local_60;
  FUN_01a78a20();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01a7e3c2;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_01a7e3c2;
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_60;
  }
  FUN_013f2b00();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01a76f60();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  lVar4 = **(longlong **)(local_60 + 0x10);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  iVar1 = *(int *)(local_60 + 0xc);
  if (param_1 < 0.0) {
    local_38 = **(longlong **)(local_60 + 0x10);
    if (local_38 != 0) {
      FUN_00d50b00();
    }
    local_60 = 0;
    local_48 = -1;
    iVar8 = 0;
    while( true ) {
      local_58 = '\0';
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      lVar7 = *(longlong *)(lVar2 + 0x10);
      local_60 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faf20();
      if (((dVar10 == dVar11) && (!NAN(dVar10) && !NAN(dVar11))) && (iVar8 < iVar1)) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar10 = (double)FUN_0128e5a0();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (pthread_key_t)local_38;
        }
        dVar11 = (double)FUN_013faed0();
        dVar11 = (double)FUN_0128e5a0(dVar11 + DAT_0241c3a0);
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (dVar11 <= dVar10 + param_1) {
          dVar11 = dVar10 + param_1;
        }
        FUN_0128e4b0(dVar11);
        FUN_013fae90();
        iVar8 = iVar8 + 1;
        if ((iVar8 < iVar1) &&
           (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar8 * 8), lVar4 != lVar5
           )) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar9 = lVar4 != 0;
          lVar4 = lVar5;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
      }
      if (local_60 != local_38) {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
        bVar9 = local_38 != 0;
        local_38 = local_60;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
    }
    lVar5 = lVar2;
    FUN_01a81420();
    in_ECX = (pthread_key_t)lVar5;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else if (local_60 != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    iVar8 = 0;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      lVar7 = *(longlong *)(lVar2 + 0x10);
      local_60 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_013faf20();
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faf20();
      if ((dVar11 < dVar10) && (iVar8 < iVar1)) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar10 = (double)FUN_0128e5a0();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faed0();
        dVar11 = (double)FUN_0128e5a0(dVar11 + _DAT_0241c3a8);
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (dVar10 + param_1 <= dVar11) {
          dVar11 = dVar10 + param_1;
        }
        FUN_0128e4b0(dVar11);
        FUN_013fae90();
        iVar8 = iVar8 + 1;
        if ((iVar8 < iVar1) &&
           (lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar8 * 8), lVar4 != lVar5
           )) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar9 = lVar4 != 0;
          lVar4 = lVar5;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
      }
    }
    lVar5 = lVar2;
    FUN_01a81420();
    in_ECX = (pthread_key_t)lVar5;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126de80();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a5f0();
  FUN_0039e8b0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0152eef0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(lVar2 + 0x10);
  if (lVar5 != 0) {
    for (lVar7 = 0; lVar7 < *(int *)(lVar5 + 0xc); lVar7 = lVar7 + 1) {
      (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8) + 0x620))();
    }
    FUN_01a80d20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01a7e3c2:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


