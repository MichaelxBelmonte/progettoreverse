// ===================================================================
// MUNoiseMapper — Complete reconstructed pseudocode
// 7 functions
// ===================================================================

// Registered properties (4):
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


// ============================================================
// 017dde70
// ============================================================
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



// ============================================================
// 017dba20
// ============================================================
// Function: FUN_017dba20
// Address: 017dba20
// Size: 1751 bytes
// Class: MUNoiseMapper
// String references:
//   "%@ %@"
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017dba20(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t arg1;
  uint64_t this_ptr;
  bool bVar6;
  int64_t local_f0;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if (*(int64_t *)(arg1 + 0x40) != 0) {
    FUN_00d50b00();
    lVar1 = *(int64_t *)(arg1 + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508450();
    if (local_e0 == 0) {
      bVar6 = false;
    }
    else {
      lVar3 = *(int64_t *)(arg1 + 0x40);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar3;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d890();
      if (local_78 == 0) {
        bVar6 = false;
      }
      else {
        lVar3 = *(int64_t *)(arg1 + 0x40);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01508450();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d890();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        bVar6 = local_88 != 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar6) {
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar1;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508300();
      local_b0 = g_027e45c8;
      if (g_027e45c8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_a0 = 0;
      local_98 = '\0';
      plVar5 = &local_a0;
      FUN_017433e0(plVar5,&local_b0,0,0);
      pVar4 = (void*)plVar5;
      local_90 = *(int64_t *)(arg1 + 0x40);
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d890();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505900();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        lVar3 = *(int64_t *)(arg1 + 0x40);
      }
      else {
        lVar3 = *(int64_t *)(arg1 + 0x40);
      }
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      FUN_01508be0();
      FUN_016c0400();
      local_f0 = local_68;
      FUN_00083ea0(2,&local_f0);
      FUN_00d8cb40();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  FUN_00d4ffd0();
  return this_ptr;
}



// ============================================================
// 017dd520
// ============================================================
// Function: FUN_017dd520
// Address: 017dd520
// Size: 915 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


float FUN_017dd520(int64_t *param_1,int64_t *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *this_ptr;
  int iVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar2 = FUN_01715480();
  iVar8 = 0;
  local_38 = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = 0;
  local_48 = 0;
  local_44 = 0;
  local_4c = 0xffffffff;
  iVar11 = 0;
LAB_017dd5a8:
  iVar6 = iVar11 - iVar2;
  iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
  uVar12 = (uint)(*(uint64_t *)(*param_2 + 0x18) >>
                 ((((byte)(iVar6 >> 0x1f) & 0xc) + (char)iVar6) * '\x04' & 0x3f)) & 0xf;
  if (uVar12 == 0xf) {
    uVar12 = 0xffffffff;
  }
  uVar3 = 0;
  switch(uVar12) {
  case 0:
  case 2:
  case 4:
    break;
  default:
    if ((int)local_4c < (int)uVar12) {
      local_4c = uVar12;
      local_50 = iVar11;
    }
    if ((uVar12 < 0xd) && ((0x1520U >> (uVar12 & 0x1f) & 1) != 0)) {
      local_48 = local_48 + 1;
      uVar3 = 1;
    }
    else {
      uVar3 = (uint)((uVar12 & 0xfffffffd) == 1);
      local_44 = local_44 + uVar3;
    }
    break;
  case 0xffffffff:
    goto switchD_017dd612_caseD_ffffffff;
  }
  iVar8 = iVar8 + 1;
  iVar6 = *(int *)(*param_1 + 0x18);
  iVar7 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  if (3 < iVar6) {
    lVar9 = 0;
    do {
      if (*(int *)(*(int64_t *)(*param_1 + 0x10) + lVar9 * 4) == iVar11) {
        local_38 = local_38 + 1;
        local_3c = local_3c + uVar3;
        goto switchD_017dd612_caseD_ffffffff;
      }
      lVar9 = lVar9 + 1;
    } while (iVar7 >> 2 != (int)lVar9);
  }
  if (((*this_ptr == 0) || (*arg1 == 0)) || (cVar1 = FUN_01716e70(), cVar1 == '\0')) {
LAB_017dd770:
    if ((uVar12 < 5) && ((0x15U >> (uVar12 & 0x1f) & 1) != 0)) {
      local_40 = local_40 + 1;
    }
  }
  else {
    lVar9 = *arg1;
    iVar4 = FUN_01717260();
    iVar5 = FUN_01715480();
    iVar6 = *(int *)(lVar9 + 0x18);
    iVar7 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    if (3 < iVar6) {
      iVar5 = iVar5 + iVar4;
      iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
      lVar10 = 0;
      do {
        if (*(int *)(*(int64_t *)(lVar9 + 0x10) + lVar10 * 4) == (iVar5 >> 0x1f & 0xcU) + iVar5)
        goto LAB_017dd770;
        lVar10 = lVar10 + 1;
      } while (iVar7 >> 2 != (int)lVar10);
    }
    local_34 = local_34 + 1;
  }
switchD_017dd612_caseD_ffffffff:
  iVar11 = iVar11 + 1;
  if (iVar11 == 0xc) goto LAB_017dd78d;
  goto LAB_017dd5a8;
LAB_017dd78d:
  if (local_4c == 0xffffffff) {
    bVar13 = false;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x18);
    iVar11 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar11 = iVar2;
    }
    iVar6 = -1;
    if (3 < iVar2) {
      lVar9 = 0;
      do {
        if (*(int *)(*(int64_t *)(*param_1 + 0x10) + lVar9 * 4) == local_50) {
          iVar6 = (int)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
      } while (iVar11 >> 2 != (int)lVar9);
    }
    bVar13 = iVar6 != -1;
  }
  fVar15 = g_02391090;
  if (local_48 == 0 && local_44 == 0) {
    fVar15 = 0.0;
  }
  fVar16 = g_028af48c;
  if (!bVar13) {
    fVar16 = 0.0;
  }
  fVar14 = 0.0;
  if (local_4c != 0xffffffff) {
    fVar14 = g_028af48c;
  }
  return ((float)local_3c * g_02391090 +
         fVar15 * (float)local_40 + (float)local_34 * g_028af488 + (float)local_38 + fVar16) /
         ((float)(local_48 + local_44) * g_02391090 + fVar14 + (float)iVar8);
}



// ============================================================
// 017dcae0
// ============================================================
// Function: FUN_017dcae0
// Address: 017dcae0
// Size: 650 bytes
// Class: MUNoiseMapper
// String references:
//   "MUNoiseMapper"
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017dcae0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t local_38;
  
  cVar2 = FUN_017dc880();
  uVar7 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
  if (cVar2 != '\0') goto LAB_017dcd5c;
  lVar4 = *(int64_t *)(this_ptr + 0x50);
  if (lVar4 == 0) {
    uVar7 = 0;
    goto LAB_017dcd5c;
  }
  FUN_00d50b00();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_017dfc60();
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_017dcd1b;
    uVar8 = FUN_00d50b00();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
LAB_017dcb96:
    local_38 = lVar4;
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar1;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar4 = (int64_t)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar6) break;
      plVar1 = *(int64_t **)(local_50[2] + 8 + lVar4 * 8);
      local_60 = plVar1;
      if ((g_027a7c10 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar6 != 0)) {
        g_027a7b60 = FUN_01151de0();
        g_027a7b48 = "MUNoiseMapper";
        g_027a7b50 = 0x48;
        g_027a7b58 = FUN_0117a1f0;
        g_027a7b68 = 0;
        ram_00000000027a7b70 = 0;
        g_027a7b78 = 0;
        ram_00000000027a7b80 = 0;
        g_027a7b88 = 0;
        ram_00000000027a7b90 = 0;
        g_027a7b98 = 0;
        ram_00000000027a7ba0 = 0;
        g_027a7ba8 = 0;
        ram_00000000027a7bb0 = 0;
        g_027a7bb8 = 0;
        ram_00000000027a7bc0 = 0;
        g_027a7bc8 = 0;
        ram_00000000027a7bd0 = 0;
        g_027a7bd8 = 0;
        ram_00000000027a7be0 = 0;
        g_027a7be8 = 0;
        ram_00000000027a7bf0 = 0;
        g_027a7bf8 = 0;
        ram_00000000027a7c00 = 0;
        g_027a7c08 = 0;
        uVar8 = ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_60;
        uVar8 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar5 != (int64_t *)0x0) {
        FUN_017dee80();
        uVar7 = 0x27a7b01;
        FUN_00d50b20();
        goto LAB_017dcd54;
      }
      iVar6 = local_48._4_4_;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          uVar8 = FUN_00d23690(uVar8,local_48._4_4_);
          local_40 = local_40 + iVar6;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
    }
    FUN_017dee80();
    FUN_00d50b20();
    uVar7 = 0;
  }
  else {
    if (local_60 != (int64_t *)0x0) goto LAB_017dcb96;
LAB_017dcd1b:
    uVar7 = 0;
  }
LAB_017dcd54:
  FUN_00d50b20();
LAB_017dcd5c:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 017dd2b0
// ============================================================
// Function: FUN_017dd2b0
// Address: 017dd2b0
// Size: 616 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017dd2b0(void)

{
  uint uVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void*arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint8_t in_XMM0 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (arg1 != (void*)0x0) {
    uVar4 = FUN_00e7bcc0();
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    in_XMM0._0_8_ = extraout_XMM0_Qa;
    *arg1 = uVar4;
  }
  lVar2 = *this_ptr;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (6 < uVar1 + 3) {
      uVar3 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      dVar11 = 0.0;
      dVar7 = 0.0;
      dVar8 = 0.0;
      if (3 < (int)uVar1) {
        lVar2 = *(int64_t *)(lVar2 + 0x10);
        if ((uVar1 & 0xfffffffc) == 4) {
          dVar8 = 0.0;
          lVar5 = 0;
          dVar7 = 0.0;
        }
        else {
          dVar8 = 0.0;
          lVar5 = 0;
          dVar7 = 0.0;
          do {
            dVar10 = (double)*(int *)(lVar2 + lVar5 * 4);
            dVar9 = (double)*(int *)(lVar2 + 4 + lVar5 * 4);
            dVar8 = dVar8 + dVar10 + dVar9;
            dVar7 = (double)((uint64_t)dVar9 & g_023908f0) +
                    (double)((uint64_t)dVar10 & g_023908f0) + dVar7;
            lVar5 = lVar5 + 2;
          } while (((int)uVar3 >> 2 & 0xfffffffeU) != (uint)lVar5);
        }
        if (((int)uVar3 >> 2 & 1U) != 0) {
          dVar9 = (double)*(int *)(lVar2 + lVar5 * 4);
          dVar7 = dVar7 + (double)(g_023908f0 & (uint64_t)dVar9);
          dVar8 = dVar8 + dVar9;
        }
      }
      uVar1 = *(uint *)(*this_ptr + 0x18);
      uVar3 = uVar1 + 3;
      if (-1 < (int)uVar1) {
        uVar3 = uVar1;
      }
      uVar3 = (int)uVar3 >> 2;
      auVar6._0_8_ = (double)(g_023945b0 & (uint64_t)(dVar8 / (double)(int)uVar3) |
                             g_023945c0) + dVar8 / (double)(int)uVar3;
      auVar6._8_8_ = _UNK_023945c8;
      auVar6 = roundsd(in_XMM0,auVar6,0xb);
      dVar8 = auVar6._0_8_;
      if (3 < (int)uVar1) {
        lVar2 = *(int64_t *)(*this_ptr + 0x10);
        if ((uVar1 & 0xfffffffc) == 4) {
          dVar11 = 0.0;
          lVar5 = 0;
        }
        else {
          dVar11 = 0.0;
          lVar5 = 0;
          do {
            dVar11 = (double)((uint64_t)((double)*(int *)(lVar2 + 4 + lVar5 * 4) - dVar8) &
                             g_023908f0) +
                     (double)((uint64_t)((double)*(int *)(lVar2 + lVar5 * 4) - dVar8) &
                             g_023908f0) + dVar11;
            lVar5 = lVar5 + 2;
          } while ((uVar3 & 0xfffffffe) != (uint)lVar5);
        }
        if ((uVar3 & 1) != 0) {
          dVar11 = dVar11 + (double)((uint64_t)((double)*(int *)(lVar2 + lVar5 * 4) - dVar8) &
                                    g_023908f0);
        }
      }
      if ((arg1 != (void*)0x0) && (((dVar7 != 0.0 || (NAN(dVar7))) && (dVar11 < dVar7)))
         ) {
        if ((double)(g_023908f0 & (uint64_t)dVar8) < (double)g_028af490) {
          dVar9 = g_0238fee8 -
                  (g_0238fee8 - (double)(g_023908f0 & (uint64_t)dVar8) / (double)g_028af490
                  ) * (double)g_028af494;
          dVar8 = g_0238fee8 - dVar9;
          FUN_00e7bcc0();
          uVar4 = FUN_00e7cd00(dVar8 * (dVar11 / dVar7) + dVar9);
          *arg1 = uVar4;
        }
      }
      uVar4 = FUN_00e7d850();
      return uVar4;
    }
  }
  return 0;
}



// ============================================================
// 017db4e0
// ============================================================
// Function: FUN_017db4e0
// Address: 017db4e0
// Size: 710 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017db4e0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int extraout_var;
  void* extraout_var_00;
  void* pVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  double dVar7;
  double dVar8;
  int64_t local_38;
  char local_30;
  
  lVar6 = *this_ptr;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *this_ptr;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x40);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar6 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0x40);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508530();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pVar4 = extraout_var_00;
  if ((extraout_var_00 != 0) && (extraout_var != 0)) {
    cVar1 = FUN_00e7c020();
    pVar4 = 0xffffffff;
    if (cVar1 != '\0') {
      return 0xffffffff;
    }
    if ((extraout_var_00 != 0) && (extraout_var != 0)) {
      cVar1 = FUN_00e7c020();
      pVar4 = 1;
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db880();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar7 = (double)FUN_0125a280();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017db880();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar8 = (double)FUN_0125a280();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = 0xffffffff;
  if (dVar8 <= dVar7) {
    uVar5 = (uint64_t)(dVar8 < dVar7);
  }
  return uVar5;
}



// ============================================================
// 017dce10
// ============================================================
// Function: FUN_017dce10
// Address: 017dce10
// Size: 873 bytes
// Class: MUNoiseMapper
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


void FUN_017dce10(void)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  void* pVar8;
  void* unaff_ESI;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if ((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) {
    FUN_00c8e710();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar2 = *this_ptr;
    if (lVar2 != 0) {
      local_40 = -1;
      while( true ) {
        lVar5 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar5 * 8);
        pVar8 = unaff_ESI;
        iVar3 = FUN_017e4480();
        pvVar6 = _pthread_getspecific(pVar8);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        iVar4 = *(int *)(lVar5 + 0x38);
        if (iVar4 == -1000000) {
          if (*(int64_t *)(lVar5 + 0x40) == 0) {
            iVar4 = -1000000;
          }
          else {
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar4 = FUN_01508300();
            *(int *)(lVar5 + 0x38) = iVar4;
          }
        }
        iVar1 = *(int *)(local_58 + 0x18);
        FUN_00c8e340();
        *(int *)(*(int64_t *)(local_58 + 0x10) + (int64_t)iVar1) = iVar3 - iVar4;
      }
      FUN_01916320();
    }
    FUN_00e7bcc0();
    FUN_017dd2b0();
    lVar2 = *this_ptr;
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0xc)) {
        iVar3 = 0;
        do {
          FUN_017e45c0();
          FUN_00e7bac0();
          FUN_017e4520();
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(lVar2 + 0xc));
      }
      FUN_01916320();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

