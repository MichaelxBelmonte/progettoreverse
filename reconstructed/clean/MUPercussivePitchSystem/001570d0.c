// Function: FUN_001570d0
// Address: 001570d0
// Size: 1117 bytes
// Class: MUPercussivePitchSystem

int FUN_001570d0(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_90;
  char local_88;
  int local_68;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar9 = *this_ptr;
  if (*(int *)(lVar9 + 0xc) != 0) {
    if (unaff_ESI == -1) {
      return *(int *)(lVar9 + 0xc) + -1;
    }
    local_68 = -1;
    local_38 = 0;
    iVar3 = -1;
    bVar1 = false;
    while( true ) {
      lVar4 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar9 + 0xc) <= local_68) break;
      lVar8 = *(int64_t *)(lVar9 + 0x10);
      lVar4 = *(int64_t *)(lVar8 + 8 + lVar4 * 8);
      FUN_00517fa0();
      pVar7 = (void*)lVar8;
      FUN_00b68420();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        FUN_0051b590();
        pvVar6 = _pthread_getspecific(pVar7);
        lVar8 = 0;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(int64_t *)((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
        }
        iVar2 = *(int *)(lVar8 + 0xb0);
      }
      else {
        iVar2 = FUN_00d45870();
        FUN_00d50b20();
      }
      if ((iVar3 < iVar2) && (iVar2 < unaff_ESI)) {
        FUN_0051b4f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          iVar3 = iVar2;
          if (lVar4 == local_38) {
            if ((!bVar1) && (lVar4 != 0)) {
              bVar1 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar4 != 0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_38 != 0)) {
              FUN_00d50b20();
              local_38 = lVar4;
              bVar1 = true;
            }
            else {
              local_38 = lVar4;
              bVar1 = true;
            }
          }
        }
      }
    }
    FUN_0015ee90();
    pVar7 = (void*)lVar9;
    if (local_38 != 0) {
      FUN_0051b4f0();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6a50();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_88 == '\0') {
        if (local_90 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      iVar3 = FUN_00d237a0();
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        return iVar3 + 1;
      }
      FUN_00d50b20();
      return iVar3 + 1;
    }
  }
  return 0;
}

