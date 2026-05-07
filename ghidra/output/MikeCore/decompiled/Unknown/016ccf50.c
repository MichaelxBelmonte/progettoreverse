// Function: FUN_016ccf50
// Address: 016ccf50
// Size: 1981 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016cd314) */
/* WARNING: Removing unreachable block (ram,0x016cd31d) */
/* WARNING: Removing unreachable block (ram,0x016cd054) */
/* WARNING: Removing unreachable block (ram,0x016cd05d) */
/* WARNING: Removing unreachable block (ram,0x016cd1f0) */
/* WARNING: Removing unreachable block (ram,0x016cd5b0) */
/* WARNING: Removing unreachable block (ram,0x016cd5b9) */
/* WARNING: Removing unreachable block (ram,0x016cd1cc) */
/* WARNING: Removing unreachable block (ram,0x016cd350) */
/* WARNING: Removing unreachable block (ram,0x016cd380) */
/* WARNING: Removing unreachable block (ram,0x016cd352) */
/* WARNING: Removing unreachable block (ram,0x016cd382) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_016ccf50(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  int iVar12;
  double local_88;
  double local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar9 = local_58;
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  iVar1 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
LAB_016cd592:
    uVar10 = 0;
    goto LAB_016cd71f;
  }
  local_70 = 0.0;
  if (param_2 != '\0') {
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_016cd062;
      }
LAB_016cd21f:
      local_70 = 0.0;
      lVar9 = param_1;
    }
    else {
      if (local_58 == 0) goto LAB_016cd21f;
LAB_016cd062:
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      local_70 = 0.0;
      while( true ) {
        lVar6 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar9 + 0xc) <= local_40) break;
        lVar8 = *(longlong *)(lVar9 + 0x10);
        local_58 = *(longlong *)(lVar8 + 8 + lVar6 * 8);
        pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
        pVar7 = (pthread_key_t)lVar8;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_01907950();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_018fcb10();
        local_70 = local_70 + (dVar3 - dVar4);
      }
      FUN_000beb10();
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar9);
    param_1 = lVar9;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
      param_1 = lVar9;
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    local_70 = local_70 / (double)iVar1;
  }
  lVar9 = local_58;
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_016cd322;
    }
  }
  else if (local_58 != 0) {
LAB_016cd322:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_40) {
        FUN_000beb10();
        FUN_00d50b20();
        param_1 = lVar9;
        goto LAB_016cd4f3;
      }
      lVar8 = *(longlong *)(lVar9 + 0x10);
      local_58 = *(longlong *)(lVar8 + 8 + lVar6 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar7 = (pthread_key_t)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_018fcb10();
    } while ((double)((ulonglong)((local_88 - local_70) - dVar3) & _DAT_023908f0) < _DAT_02391038);
    FUN_000beb10();
    FUN_00d50b20();
    goto LAB_016cd592;
  }
LAB_016cd4f3:
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  uVar11 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_016cd5be;
    }
  }
  else if (local_58 != 0) {
LAB_016cd5be:
    iVar1 = 0;
    do {
      iVar12 = iVar1;
      iVar2 = *(int *)(local_58 + 0xc);
      if (iVar2 <= iVar12) break;
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_018fcb10();
      iVar1 = iVar12 + 1;
    } while ((double)((ulonglong)((local_88 + local_70) - dVar3) & _DAT_023908f0) < _DAT_02391038);
    FUN_000beb10();
    uVar10 = CONCAT71(uVar11,iVar2 <= iVar12);
    FUN_00d50b20();
    goto LAB_016cd71f;
  }
  uVar10 = CONCAT71(uVar11,1);
LAB_016cd71f:
  return uVar10 & 0xffffffff;
}


