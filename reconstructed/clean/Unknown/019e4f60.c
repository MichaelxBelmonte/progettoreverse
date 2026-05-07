// Function: FUN_019e4f60
// Address: 019e4f60
// Size: 1754 bytes
// Class: Unknown

void* FUN_019e4f60(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  void*this_ptr;
  char *pcVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*arg1 + 0xe20))();
  FUN_00d23340();
  pcVar8 = local_40;
  local_38[0] = local_40[0];
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = pcVar8;
  }
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == (char *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  pvVar5 = _pthread_getspecific((void*)pcVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if (local_40[0] == '\0') {
    if (local_48 != (char *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019e5073;
    }
LAB_019e50c4:
    pvVar5 = _pthread_getspecific((void*)pcVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01296db0();
    if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (char *)0x0) {
LAB_019e51bd:
      pvVar5 = _pthread_getspecific((void*)pcVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      (**(code **)(*arg1 + 0xa00))();
      pvVar5 = _pthread_getspecific((void*)pcVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific((void*)pcVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_012ebfe0();
      if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      local_78 = dVar11 + g_0241b6b0 + g_0241b688;
      bVar1 = false;
      pcVar4 = (char *)0x0;
LAB_019e5306:
      do {
        (**(code **)(*arg1 + 0x9c0))(local_78,g_023b1e98);
        if (local_48 == pcVar4) {
          pcVar9 = pcVar4;
          bVar2 = bVar1;
          if ((bVar1) || (local_48 == (char *)0x0)) goto joined_r0x019e53a9;
          bVar2 = true;
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            goto LAB_019e5395;
          }
        }
        else {
          pcVar9 = local_48;
          if (local_40[0] == '\0') {
            if (local_48 != (char *)0x0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar1) && (pcVar4 != (char *)0x0)) {
              FUN_00d50b20();
              pcVar4 = local_48;
LAB_019e5395:
              pcVar9 = pcVar4;
              bVar2 = true;
            }
joined_r0x019e53a9:
            if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar2 = true;
            if ((bVar1) && (pcVar4 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar1 = bVar2;
        pVar7 = (void*)pcVar8;
        local_78 = local_78 + g_0241b688;
        pcVar4 = pcVar9;
        if (pcVar9 == (char *)0x0) {
          if (local_78 + g_023b1e98 <= dVar12) goto LAB_019e5461;
          goto LAB_019e5306;
        }
        if ((*(int *)(pcVar9 + 0xc) != 0) || (local_78 + g_023b1e98 <= dVar12))
        goto LAB_019e5417;
      } while( true );
    }
    pvVar5 = _pthread_getspecific((void*)pcVar8);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pcVar8 = local_48;
    }
    cVar3 = FUN_0126cd60();
    if (cVar3 != '\0') goto LAB_019e51bd;
    *this_ptr = local_48;
  }
  else {
    if (local_48 == (char *)0x0) goto LAB_019e50c4;
LAB_019e5073:
    pvVar5 = _pthread_getspecific((void*)pcVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_0126cd60();
    if (cVar3 != '\0') goto LAB_019e50c4;
    *this_ptr = local_48;
  }
  *(void*)(this_ptr + 1) = 1;
LAB_019e562b:
  FUN_00d50b20();
  return this_ptr;
LAB_019e5417:
  if (*(int *)(pcVar9 + 0xc) == 0) {
LAB_019e5461:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d242c0(local_78 + g_023b1e98,0);
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259650();
    if (0 < *(int *)(pcVar9 + 0xc)) {
      iVar10 = 0;
      do {
        pvVar5 = _pthread_getspecific((void*)*(void*)(pcVar9 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_01259650();
        if (dVar11 + g_0241b6b0 < dVar12) {
          FUN_00d242c0(dVar12,arg1);
          FUN_00d23310();
          pcVar8 = local_40;
          if (local_40[0] == '\0') {
            pcVar8 = &local_70;
          }
          local_70 = local_40[0];
          *pcVar8 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b20();
          }
          *(void*)(this_ptr + 1) = 0;
          if ((local_70 == '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b00();
          }
          *this_ptr = local_48;
          *(void*)(this_ptr + 1) = 1;
          goto joined_r0x019e560e;
        }
        iVar10 = iVar10 + 1;
        dVar11 = dVar12;
      } while (iVar10 < *(int *)(pcVar9 + 0xc));
    }
    FUN_00d23340();
    pcVar8 = local_40;
    if (local_40[0] == '\0') {
      pcVar8 = &local_70;
    }
    local_70 = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if ((local_70 == '\0') && (local_48 != (char *)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
  }
joined_r0x019e560e:
  if ((bVar1) && (pcVar9 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (char *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_019e562b;
}

