// Function: FUN_013ed380
// Address: 013ed380
// Size: 2864 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013edaae) */
/* WARNING: Removing unreachable block (ram,0x013edaba) */
/* WARNING: Removing unreachable block (ram,0x013ed3d2) */
/* WARNING: Removing unreachable block (ram,0x013ed3db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_013ed380(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  pthread_key_t pVar5;
  void *pvVar6;
  pthread_key_t in_ECX;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  double local_68;
  longlong local_50;
  char local_48;
  double local_40;
  double local_38;
  
  (**(code **)(*unaff_RSI + 0x408))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_1);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_2);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faed0();
  pVar5 = FUN_013f3690();
  if (pVar5 == 0xffffffff) {
    FUN_013f2b00();
    iVar1 = *(int *)(local_50 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      bVar10 = false;
      bVar9 = false;
    }
    else {
      FUN_013f2b00();
      lVar7 = **(longlong **)(local_50 + 0x10);
      bVar10 = lVar7 != 0;
      if (bVar10) {
        FUN_00d50b00();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      bVar9 = false;
joined_r0x013ed817:
      if (lVar7 != 0) {
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faf20();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faf20();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faed0();
        local_68 = (dVar11 - dVar12) / (dVar13 - dVar14);
        bVar4 = true;
        local_40 = DAT_023934c8;
        goto LAB_013edae7;
      }
    }
LAB_013ed7dd:
    local_68 = 0.0;
    bVar3 = true;
    bVar4 = true;
    local_40 = DAT_023934c8;
    local_38 = DAT_023934c8;
  }
  else {
    FUN_013f2b00();
    lVar7 = (longlong)(int)pVar5;
    lVar2 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar7 * 8);
    bVar9 = lVar2 != 0;
    in_ECX = pVar5;
    if (bVar9) {
      FUN_00d50b00();
      in_ECX = (pthread_key_t)lVar7;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_013f2b00();
    iVar1 = *(int *)(local_50 + 0xc);
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
    pVar5 = pVar5 + 1;
    if ((int)pVar5 < iVar1) {
      FUN_013f2b00();
      lVar8 = (longlong)(int)pVar5;
      lVar7 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar8 * 8);
      bVar10 = lVar7 != 0;
      in_ECX = pVar5;
      if (bVar10) {
        FUN_00d50b00();
        in_ECX = (pthread_key_t)lVar8;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto joined_r0x013ed817;
      if (lVar7 == 0) goto LAB_013ed67a;
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faf20();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013faed0();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_013faed0();
      local_68 = (dVar11 - dVar12) / (dVar13 - dVar14);
    }
    else {
      bVar10 = false;
      if (lVar2 == 0) goto LAB_013ed7dd;
LAB_013ed67a:
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faf20();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_013faf20();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013faed0();
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_013faed0();
      local_68 = (dVar11 - dVar12) / (dVar13 - dVar14);
      lVar7 = 0;
    }
    local_c8 = local_50;
    local_c0 = '\0';
    local_40 = (double)FUN_013f3980(dVar14,&local_c8);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    local_40 = local_40 / DAT_023b3bc0;
    bVar4 = false;
    if (lVar7 == 0) {
      local_38 = DAT_023934c8;
      bVar3 = true;
      goto LAB_013edb89;
    }
LAB_013edae7:
    local_b0 = '\0';
    local_a8 = local_50;
    local_a0 = '\0';
    local_b8 = lVar7;
    local_38 = (double)FUN_013f3980(local_40,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    local_38 = local_38 / DAT_023b3bc0;
    bVar3 = false;
    if ((local_b0 != '\0') && (bVar3 = false, local_b8 != 0)) {
      FUN_00d50b20();
      bVar3 = false;
    }
  }
LAB_013edb89:
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c830(DAT_023b19a0);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c8d0(DAT_0238fee8);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c880(_DAT_023945b0 ^ (ulonglong)local_68);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c920(local_68);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142cb80(local_40);
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142cad0(local_38);
  if (!bVar4) {
    pvVar6 = _pthread_getspecific(in_ECX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_0142c9b0();
    if (local_40 < dVar11) {
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0142cad0(local_40);
    }
  }
  if (!bVar3) {
    pvVar6 = _pthread_getspecific(in_ECX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_0142c9e0();
    if (local_38 < dVar11) {
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0142cb80(local_38);
    }
  }
  local_98 = local_50;
  local_90 = '\0';
  FUN_013f4430();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (bVar10 && !bVar3) {
    FUN_00d50b20();
  }
  if (bVar9 && !bVar4) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


