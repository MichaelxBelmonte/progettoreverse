// Function: FUN_018653b0
// Address: 018653b0
// Size: 712 bytes
// Class: Unknown

void FUN_018653b0(void*param_1,uint32_t param_2,int param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *this_ptr;
  uint uVar10;
  uint32_t uVar11;
  uint64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  void*local_48;
  int local_40;
  uint32_t uStack_3c;
  char local_38;
  
  local_58 = *this_ptr;
  local_50 = '\0';
  FUN_018da560();
  lVar2 = CONCAT44(uStack_3c,local_40);
  local_48 = param_1;
  if (local_38 == '\0') {
    if (((lVar2 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (CONCAT44(uStack_3c,local_40) != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = *(int *)(lVar2 + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  if (iVar6 >> 2 < param_3) {
    local_70 = *local_48;
    local_68 = 0;
    FUN_0185df90(1,param_2,&local_70);
    lVar3 = CONCAT44(uStack_3c,local_40);
    if ((local_38 == '\0') && (lVar3 != 0)) {
      FUN_00d50b00();
    }
    if ((int)*(uint *)(lVar2 + 0x18) < 4) {
      local_60 = *(int64_t *)(lVar3 + 0x10);
    }
    else {
      uVar7 = *(uint *)(lVar2 + 0x18) >> 2;
      lVar1 = *(int64_t *)(lVar2 + 0x10);
      local_60 = *(int64_t *)(lVar3 + 0x10);
      if ((uint64_t)uVar7 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          *(void*)(local_60 + (int64_t)*(int *)(lVar1 + uVar9 * 4) * 4) = 0;
          *(void*)(local_60 + (int64_t)*(int *)(lVar1 + 4 + uVar9 * 4) * 4) = 0;
          *(void*)(local_60 + (int64_t)*(int *)(lVar1 + 8 + uVar9 * 4) * 4) = 0;
          *(void*)(local_60 + (int64_t)*(int *)(lVar1 + 0xc + uVar9 * 4) * 4) = 0;
          uVar9 = uVar9 + 4;
        } while ((uVar7 & 0xfffffffc) != uVar9);
      }
      if ((uint64_t)(uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          *(void*)(local_60 + (int64_t)*(int *)(lVar1 + uVar9 * 4 + uVar8 * 4) * 4) = 0;
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
      }
    }
    uVar11 = FUN_015b32a0(g_02391074,&local_40);
    local_48 = (void*)CONCAT44(local_48._4_4_,uVar11);
    iVar4 = FUN_01715480();
    iVar4 = (local_40 - iVar4) + 0xc;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    uVar9 = *(uint64_t *)(*this_ptr + 0x18);
    cVar5 = (char)iVar4 + '\x01';
    uVar7 = cVar5 * 0x2b;
    uVar10 = (uint)(uVar9 >> (((char)(iVar4 + 0xbU) +
                               ((byte)((iVar4 + 0xbU & 0xff) / 3) & 0xfc) * -3 & 0xf) << 2)) & 0xf;
    uVar7 = (uint)(uVar9 >> ((cVar5 + ((char)((uVar7 & 0xffff) >> 0xf) + (char)(uVar7 >> 9)) * -0xc
                             & 0xfU) << 2)) & 0xf;
    if ((uVar10 == 0xf) || (uVar7 == 0xf)) {
      if (((~(uint)uVar9 & 0xf0000000) == 0) || (iVar4 != 6)) {
        if (*(float *)(&g_02417230 + (uint64_t)(uVar10 != 0xf || uVar7 != 0xf) * 4) <=
            local_48._0_4_ &&
            local_48._0_4_ !=
            *(float *)(&g_02417230 + (uint64_t)(uVar10 != 0xf || uVar7 != 0xf) * 4)) {
          FUN_0171a310();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      else if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}

