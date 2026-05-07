// Function: FUN_00707bf0
// Address: 00707bf0
// Size: 3927 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint32_t FUN_00707bf0(uint64_t param_1,char param_2)

{
  int64_t *****ppppplVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *******ppppppplVar6;
  void *pvVar7;
  char *pcVar8;
  void* pVar9;
  int64_t *******ppppppplVar10;
  int64_t ******pppppplVar11;
  int64_t *******ppppppplVar12;
  int iVar13;
  int64_t *******this_ptr;
  int64_t *******ppppppplVar14;
  int64_t lVar15;
  bool bVar16;
  uint32_t uVar17;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_178;
  char local_170;
  int64_t *******local_168;
  char local_160;
  int64_t *******local_158;
  char local_150;
  int64_t *****local_148;
  char local_140;
  int64_t *******local_138;
  char local_130;
  uint64_t local_128;
  int64_t local_120;
  char local_118;
  int64_t *******local_110;
  int64_t *******local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *******local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *******local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  char local_81;
  int64_t *******in_stack_ffffffffffffff80;
  char local_78;
  int64_t *******local_70;
  char local_68 [8];
  int64_t *******local_60;
  uint64_t local_58;
  int local_50;
  int64_t *******local_48;
  byte local_39;
  uint32_t local_38;
  
  FUN_01f27fe0();
  uVar4 = (*(*local_70)[0x8a])();
  cVar3 = (char)uVar4;
  if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
    uVar4 = FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    (*(*this_ptr)[0xbb])();
    if (local_68[0] == '\0') {
      if (local_70 == (int64_t *******)0x0) {
        return 0;
      }
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_70 == (int64_t *******)0x0) {
      return 0;
    }
    FUN_0062abf0();
    if (local_70 == (int64_t *******)0x0) {
      bVar16 = false;
    }
    else {
      FUN_0062abf0();
      bVar16 = in_stack_ffffffffffffff80[0x61] != (int64_t ******)0x0;
      if (local_78 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (bVar16) {
      FUN_0063f230();
      if (local_68[0] == '\0') {
        if (local_70 != (int64_t *******)0x0) {
          FUN_00d50b00();
          if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00707d21;
        }
      }
      else if (local_70 != (int64_t *******)0x0) {
LAB_00707d21:
        cVar3 = FUN_00212c70();
        if (cVar3 == '\0') {
          FUN_00d50b20();
          FUN_00d50b20();
          return 0;
        }
        FUN_00d50b20();
      }
    }
    uVar4 = FUN_00d50b20();
  }
  local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  if (param_2 == '\0') {
    return local_38;
  }
  FUN_007f2390();
  if (local_68[0] == '\0') {
    if (local_70 == (int64_t *******)0x0) {
      return local_38;
    }
    FUN_00d50b00();
    if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *******)0x0) {
    return local_38;
  }
  local_128 = 0;
  local_81 = '\0';
  FUN_01e561b0();
  local_100 = 0;
  if (local_78 == '\0') {
    if (in_stack_ffffffffffffff80 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_100 = '\x01';
  ppppppplVar10 = (int64_t *******)&local_108;
  local_108 = in_stack_ffffffffffffff80;
  FUN_007f3210(ppppppplVar10,&local_128,&local_81);
  if (local_68[0] == '\0') {
    if (((local_70 != (int64_t *******)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 == (int64_t *******)0x0) {
    FUN_007f32f0();
    local_48 = local_70;
    goto LAB_00708b1e;
  }
  local_48 = local_70;
  if (local_81 != '\0') {
    FUN_01f27fe0();
    (*(*local_70)[0xac])();
    if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x14] != (int64_t ******)0x0) {
    FUN_00d50b00();
    FUN_00d50b20();
    pppppplVar11 = this_ptr[0x14];
    if (pppppplVar11 != (int64_t ******)0x0) {
      FUN_00d50b00();
    }
    FUN_01c4f180((int)local_128,0);
    if (pppppplVar11 != (int64_t ******)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00708b1e;
  }
  FUN_006f3f00();
  local_39 = FUN_0076f070();
  if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (*(*local_70)[0x8a])();
  if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00d50b00();
    local_98 = '\0';
    in_stack_ffffffffffffff80 = this_ptr;
    do {
      (*(*in_stack_ffffffffffffff80)[0x6e])();
      if (local_70 == in_stack_ffffffffffffff80) {
        if (((local_98 == '\0') && (local_70 != (int64_t *******)0x0)) && (local_68[0] != '\0'))
        goto LAB_007080ae;
      }
      else {
        in_stack_ffffffffffffff80 = local_70;
        if (local_68[0] == '\0') {
          if (local_98 == '\0') {
            pcVar8 = &local_98;
          }
          else {
            FUN_00d50b20();
            pcVar8 = &local_98;
          }
        }
        else {
          if (local_98 != '\0') {
            FUN_00d50b20();
          }
LAB_007080ae:
          local_98 = '\x01';
          pcVar8 = local_68;
        }
        *pcVar8 = '\0';
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fddb0 == '\0') && (iVar13 = ___cxa_guard_acquire(), iVar13 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      ppppppplVar10 = (int64_t *******)&g_02802688;
      if (in_stack_ffffffffffffff80 != (int64_t *******)0x0) {
        (*(*in_stack_ffffffffffffff80)[0x6c])();
        cVar3 = FUN_00e85ea0();
        ppppppplVar10 = (int64_t *******)&stack0xffffffffffffff80;
        if (cVar3 == '\0') {
          ppppppplVar10 = (int64_t *******)&g_02802688;
        }
      }
      if (*ppppppplVar10 != (int64_t ******)0x0) {
        ppppppplVar14 = in_stack_ffffffffffffff80;
        if ((local_98 == '\0') && (in_stack_ffffffffffffff80 != (int64_t *******)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_0070822e;
      }
    } while (in_stack_ffffffffffffff80 != (int64_t *******)0x0);
    ppppppplVar14 = (int64_t *******)0x0;
LAB_0070822e:
    FUN_00d50b20();
    FUN_0062abf0();
    pppppplVar11 = local_70[0x61];
    if (local_68[0] != '\0') {
      FUN_00d50b20();
    }
    ppppppplVar12 = local_48;
    if (pppppplVar11 == (int64_t ******)0x0) {
      local_39 = FUN_00549d80();
    }
    if (local_39 == 0) {
      local_a8 = 0;
      local_a0 = (int64_t *)0x0;
    }
    else {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      local_a0 = plVar5;
      FUN_01f27fe0();
      FUN_006f3f00();
      local_f0 = 0;
      local_f8 = CONCAT71(uStack_97,local_98);
      if (local_90 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      ppppppplVar12 = local_48;
      local_f0 = '\x01';
      FUN_000c4290();
      local_110 = local_70;
      ppppppplVar6 = local_70;
      if (local_68[0] == '\0') {
        if (((local_70 != (int64_t *******)0x0) &&
            (ppppppplVar6 = (int64_t *******)FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != (int64_t *******)0x0)) {
          ppppppplVar6 = (int64_t *******)FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        ppppppplVar6 = (int64_t *******)FUN_00d50b20();
      }
      if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != (int64_t *******)0x0)) {
        ppppppplVar6 = (int64_t *******)FUN_00d50b20();
      }
      local_a8 = CONCAT71((int7)((uint64_t)ppppppplVar6 >> 8),1);
      if (local_110 != (int64_t *******)0x0) {
        local_68[0] = '\0';
        local_70 = (int64_t *******)0x0;
        local_60 = local_110;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar13 = -local_58._4_4_;
            }
            else {
              iVar13 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar13);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar13 = 0;
            }
            local_58 = CONCAT44(iVar13,(int)local_58);
          }
          lVar15 = (int64_t)(int)local_58;
          iVar13 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar13);
          if (*(int *)((int64_t)local_60 + 0xc) <= iVar13) break;
          pppppplVar11 = local_60[2];
          local_70 = (int64_t *******)pppppplVar11[lVar15 + 1];
          FUN_0053a8d0();
          pVar9 = (void*)pppppplVar11;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_006f3f00();
          FUN_00757c60();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar17 = FUN_012caf10();
          local_d8 = local_120;
          local_d0 = 0;
          if (local_118 == '\0') {
            if (local_120 != 0) {
              uVar17 = FUN_00d50b00();
            }
          }
          else {
            local_118 = '\0';
          }
          local_d0 = '\x01';
          uVar17 = FUN_00550980(uVar17,&local_d8);
          local_e0 = 0;
          if (local_78 == '\0') {
            if (in_stack_ffffffffffffff80 != (int64_t *******)0x0) {
              uVar17 = FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          ppppppplVar12 = local_48;
          local_e0 = '\x01';
          local_160 = '\0';
          local_168 = local_70;
          local_e8 = in_stack_ffffffffffffff80;
          FUN_00549130(uVar17,&local_168);
          if ((local_160 != '\0') && (local_168 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != (int64_t *******)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
            FUN_00d50b20();
          }
        }
        ppppppplVar10 = local_60;
        FUN_0015ee90();
        FUN_00d50b20();
      }
    }
    if (ppppppplVar14 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = 0;
    local_a0 = (int64_t *)0x0;
    ppppppplVar12 = local_48;
  }
  local_150 = '\0';
  local_158 = ppppppplVar12;
  FUN_006f3f00();
  FUN_00757c60();
  local_c0 = 0;
  if (local_68[0] == '\0') {
    if (local_70 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = '\0';
  }
  local_c0 = '\x01';
  local_c8 = local_70;
  FUN_01c77060((int)local_128,local_39 ^ 1);
  if ((local_c0 != '\0') && (local_c8 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (*(*local_70)[0x8a])();
  if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = local_a0;
  ppppppplVar14 = local_48;
  if (cVar3 == '\0') {
    FUN_006f3f00();
    lVar15 = CONCAT71(uStack_97,local_98);
    FUN_00757c60();
    pvVar7 = _pthread_getspecific((void*)ppppppplVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    ppppppplVar14 = local_48;
    if (local_48 == local_70) {
LAB_00708897:
      plVar5 = local_a0;
      if ((local_68[0] != '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      ppppppplVar14 = local_70;
      if (local_68[0] == '\0') {
        if (local_70 != (int64_t *******)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_00708897;
      }
      FUN_00d50b20();
      local_68[0] = '\0';
      plVar5 = local_a0;
    }
    if ((local_78 != '\0') && (in_stack_ffffffffffffff80 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (lVar15 != 0)) {
      FUN_00d50b20();
    }
    if ((local_39 != 0) && (plVar5 != (int64_t *)0x0)) {
      FUN_00c9fe20();
      cVar3 = local_68[0];
      uVar4 = CONCAT71((int7)((uint64_t)ppppppplVar10 >> 8),local_68[0]);
      pcVar8 = local_68;
      if (local_68[0] == '\0') {
        pcVar8 = &stack0xffffffffffffff80;
      }
      pppppplVar11 = (int64_t ******)
                     CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff80 >> 8),local_68[0]);
      *pcVar8 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        if (local_70 != (int64_t *******)0x0) {
          FUN_00d50b00();
          goto LAB_00708942;
        }
      }
      else if (local_70 != (int64_t *******)0x0) {
LAB_00708942:
        local_68[0] = '\0';
        local_60 = local_70;
        local_50 = 0;
        local_58 = 0;
        if (0 < *(int *)((int64_t)local_70 + 0xc)) {
          lVar15 = 0;
          do {
            ppppplVar1 = local_70[2][lVar15];
            FUN_0053a8d0();
            pvVar7 = _pthread_getspecific((void*)uVar4);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_140 = '\0';
            local_148 = ppppplVar1;
            uVar17 = FUN_005491e0();
            local_b0 = 0;
            lVar2 = CONCAT71(uStack_97,local_98);
            if (local_90 == '\0') {
              if (lVar2 != 0) {
                uVar17 = FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            local_b0 = '\x01';
            local_130 = '\0';
            local_138 = ppppppplVar14;
            local_b8 = lVar2;
            FUN_00551070(uVar17,&local_138);
            plVar5 = local_a0;
            if ((local_130 != '\0') && (local_138 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (CONCAT71(uStack_97,local_98) != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != (int64_t *****)0x0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (pppppplVar11 != (int64_t ******)0x0)) {
              FUN_00d50b20();
            }
            lVar15 = lVar15 + 1;
            local_58 = CONCAT44(local_58._4_4_,(int)lVar15);
          } while ((int)lVar15 < *(int *)((int64_t)local_70 + 0xc));
        }
        FUN_0015ee90();
        FUN_00d50b20();
      }
    }
  }
  local_48 = ppppppplVar14;
  if (((char)local_a8 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00708b1e:
  if (local_48 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return local_38;
}

