// Function: FUN_0031d5a0
// Address: 0031d5a0
// Size: 2068 bytes
// Class: MURelativeTimeProgressor

void FUN_0031d5a0(void* param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  uint64_t uVar7;
  char *pcVar8;
  int64_t lVar9;
  byte unaff_SIL;
  int64_t this_ptr;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t local_c0;
  char local_b8;
  uint32_t local_ac;
  char local_a8;
  undefined7 uStack_a7;
  char local_a0;
  int64_t local_78;
  char local_70;
  byte local_64;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_00764730();
  lVar10 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_58 = lVar10;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar2 = FUN_015305d0();
  lVar10 = g_026f6fd0;
  lVar9 = local_58;
  if (bVar2 != unaff_SIL) {
    if (g_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar10;
    FUN_00e7d6f0();
    uVar7 = 0xaaaaaaaaaaaaaaab;
    uVar11 = FUN_0071a120();
    if (((local_38[0] == '\0') && (local_40 != 0)) &&
       ((uVar11 = FUN_00d50b00(), local_38[0] != '\0' && (local_40 != 0)))) {
      uVar11 = FUN_00d50b20();
    }
    local_50 = local_60;
    local_48 = '\0';
    FUN_000175c0(uVar11,&local_50);
    lVar10 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_64 = unaff_SIL;
    if (lVar10 != 0) {
      local_38[0] = '\0';
      local_40 = lVar10;
      unaff_SIL = FUN_00c70bc0();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    pVar6 = (void*)uVar7;
    if ((lVar10 != 0 & unaff_SIL) == 0) {
      FUN_00757c60();
      pvVar4 = _pthread_getspecific((void*)uVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      lVar10 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (void*)uVar7;
      if (lVar10 != 0) {
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        iVar1 = *(int *)(local_40 + 0xc);
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        pVar6 = (void*)uVar7;
        if (iVar1 != 0) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          FUN_00d23310();
          lVar9 = local_40;
          pVar6 = (void*)CONCAT71((int7)((uint64_t)uVar7 >> 8),local_38[0]);
          pcVar8 = &local_a8;
          if (local_38[0] != '\0') {
            pcVar8 = local_38;
          }
          local_a8 = local_38[0];
          *pcVar8 = '\0';
          if ((local_38[0] != '\0') && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          if (lVar10 == lVar9) {
            if ((local_a8 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar10 = lVar9;
            if (local_a8 == '\0') {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
            }
            else {
              FUN_00d50b20();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x498))();
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_64 != 0) {
            FUN_0044c3a0();
            pvVar4 = _pthread_getspecific(pVar6);
            lVar9 = lVar10;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              lVar9 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
            local_60 = lVar9;
            FUN_00757c60();
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb450();
            local_78 = local_50;
            local_70 = 0;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_70 = '\x01';
            pVar6 = 0;
            FUN_0044c530(0,&local_78,local_ac);
            lVar9 = local_40;
            if (local_38[0] == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            FUN_012e8aa0();
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (CONCAT71(uStack_a7,local_a8) != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e44d0();
          (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x498))();
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_64 != 0) {
      FUN_0078cdb0();
      FUN_013fd5b0();
      cVar3 = FUN_013fd430();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_013fd5b0();
        FUN_013fd790();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01530590();
    FUN_00d403d0();
    lVar10 = g_026d88c8;
    if (g_026d88c8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d40470(&local_c0,&stack0xffffffffffffff68,1,3);
    lVar9 = local_58;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  return;
}

