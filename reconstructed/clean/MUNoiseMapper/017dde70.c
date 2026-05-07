// Function: FUN_017dde70
// Address: 017dde70
// Size: 2067 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017dde70(void* param_1,uint64_t param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  void* pVar11;
  uint64_t arg1;
  int64_t this_ptr;
  uint64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  int64_t local_98;
  int64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  int iVar12;
  int iStack_6c;
  char local_58;
  uint64_t local_50;
  char local_48;
  uint64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar8 = *(int64_t *)(this_ptr + 0x40);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01507970();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    uVar10 = *(uint64_t *)(this_ptr + 0x40);
    if (uVar10 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508610();
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    FUN_00e7bcc0();
    FUN_00e7b970();
    local_38._4_4_ = (int)(uVar5 >> 0x20);
    iStack_6c = (int)(param_2 >> 0x20);
    iVar12 = (int)(arg1 >> 0x20);
    if (((((local_38._4_4_ == 0) || (arg1 >> 0x20 == 0)) ||
         (cVar1 = FUN_00e7c020(), cVar1 != '\0')) || ((local_38._4_4_ == 0 || (iVar12 == 0)))) ||
       (cVar1 = FUN_00e7c020(), local_50 = arg1, cVar1 == '\0')) {
      local_88 = FUN_00e7bcc0();
      FUN_00e7b970();
      local_a0 = param_2;
      if (((local_38._4_4_ != 0) && (param_2 >> 0x20 != 0)) &&
         ((cVar1 = FUN_00e7c020(), cVar1 == '\0' &&
          (((local_38._4_4_ != 0 && (iStack_6c != 0)) &&
           (cVar1 = FUN_00e7c020(), local_50 = param_2, cVar1 != '\0')))))) goto LAB_017de050;
    }
    else {
LAB_017de050:
      lVar8 = *(int64_t *)(this_ptr + 0x40);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar4 = _pthread_getspecific(param_1);
      uVar10 = arg1;
      if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        uVar10 = *(uint64_t *)(arg1 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      FUN_0150ff70();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_58 != '\0') && (arg1 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (*(char *)(this_ptr + 0x7c) == '\0') {
        local_38 = uVar5;
        if (*(int *)(this_ptr + 0x78) != 1) {
          local_b0 = local_50;
          local_a8 = '\0';
          uVar5 = FUN_00e7bcc0();
          uVar3 = FUN_017e7190(uVar5,&local_b0,&local_a0);
          uVar10 = (uint64_t)uVar3;
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((char)uVar3 != '\0') {
            local_38 = local_a0;
          }
          lVar8 = *(int64_t *)(this_ptr + 0x40);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          pvVar4 = _pthread_getspecific((void*)uVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = FUN_01507970();
          if (((local_38._4_4_ == 0) || (uVar7 >> 0x20 == 0)) ||
             (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
            uVar3 = *(uint *)(this_ptr + 0x78);
            uVar10 = (uint64_t)uVar3;
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if (uVar3 == 0) {
              local_88 = FUN_00e7bcc0();
              lVar8 = *(int64_t *)(this_ptr + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific((void*)uVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507970();
              FUN_00e7b970();
              uVar7 = FUN_00e7bcc0();
              bVar2 = 0;
              if ((local_38._4_4_ != 0) && (bVar2 = 0, uVar7 >> 0x20 != 0)) {
                bVar2 = FUN_00e7c020();
                bVar2 = bVar2 ^ 1;
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
              if (bVar2 != 0) {
                local_88 = FUN_00e7bcc0();
              }
              lVar8 = *(int64_t *)(this_ptr + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_98 = lVar8;
              pvVar4 = _pthread_getspecific((void*)uVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01508450();
              local_80 = local_38;
              pvVar4 = _pthread_getspecific((void*)uVar5);
              if (pvVar4 != (void *)0x0) {
                local_80 = local_38;
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  uVar5 = *(uint64_t *)
                           (local_80 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                  local_80 = uVar5;
                }
              }
              pVar11 = (void*)uVar5;
              lVar8 = *(int64_t *)(this_ptr + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              local_90 = lVar8;
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar9 = FUN_01507970();
              FUN_00e7bcc0();
              FUN_00e7b820();
              FUN_00e7b820();
              lVar8 = *(int64_t *)(this_ptr + 0x40);
              if (lVar8 != 0) {
                FUN_00d50b00();
              }
              pvVar4 = _pthread_getspecific(pVar11);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar10 = FUN_01507970();
              FUN_00e7bcc0();
              FUN_00e7b820();
              FUN_00e7b970();
              uVar5 = local_38;
              FUN_0150dbb0(local_38,uVar9);
              pVar11 = (void*)uVar5;
              if ((local_48 == '\0') && (uVar7 != 0)) {
                FUN_00d50b00();
              }
              if (lVar8 != 0) {
                FUN_00d50b20();
              }
              if (local_90 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_38 != 0)) {
                FUN_00d50b20();
              }
              if (local_98 != 0) {
                FUN_00d50b20();
              }
              if (uVar7 != 0) {
                if (*(int *)(uVar7 + 0xc) != 0) {
                  uVar10 = *(uint64_t *)(this_ptr + 0x40);
                  if (uVar10 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar4 = _pthread_getspecific(pVar11);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_38 = FUN_01507970();
                  if (uVar10 != 0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
          else if (lVar8 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = FUN_016cac90(0,2);
        uVar10 = local_50;
      }
      uVar5 = local_38;
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    local_38 = uVar5;
    if (((iVar12 == 0) || ((local_38._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 == '\0')))) &&
       ((uVar5 = CONCAT71((int7)(uVar10 >> 8),1), iStack_6c == 0 ||
        ((local_38._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0')))))) goto LAB_017de66f;
  }
  uVar5 = 0;
LAB_017de66f:
  return uVar5 & 0xffffffff;
}

