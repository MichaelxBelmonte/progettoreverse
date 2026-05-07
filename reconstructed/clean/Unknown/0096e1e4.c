// Function: FUN_0096e1e4
// Address: 0096e1e4
// Size: 1023 bytes
// Class: Unknown

int FUN_0096e1e4(uint *param_1,uint param_2,byte *param_3,void*param_4,int64_t param_5,
                uint64_t param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,
                void*param_10)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void*puVar4;
  uint64_t uVar5;
  uint unaff_ESI;
  int64_t this_ptr;
  uint uVar6;
  bool bVar7;
  int64_t local_res8;
  int64_t local_res10;
  int64_t local_res18;
  void*local_res20;
  uint8_t local_f8 [24];
  int64_t local_e0;
  uint32_t local_b0;
  uint local_ac;
  uint64_t local_a8;
  void*local_a0;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint8_t local_88 [80];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_a8 = 0;
  iVar1 = 99;
  if ((((((unaff_ESI < 0x1401) && (this_ptr != 0)) && (param_1 != (uint *)0x0)) &&
       ((param_3 != (byte *)0x0 && (param_4 != (void*)0x0)))) &&
      ((local_res8 != 0 && ((local_res10 != 0 && (local_res18 != 0)))))) &&
     (iVar1 = 0x143, *param_1 < 5)) {
    puVar4 = local_f8;
    if (param_10 != (void*)0x0) {
      puVar4 = param_10;
    }
    local_94 = param_2;
    puVar4[0x10] = 0;
    local_ac = unaff_ESI;
    lVar2 = FUN_0096e0a0(&local_b0,0x40,puVar4);
    if (lVar2 == 0) {
      iVar1 = 300;
    }
    else {
      lVar2 = FUN_0096e5e3(0x30,local_b0,&local_8c,&local_90);
      if (lVar2 == 0) {
        iVar1 = 0x12d;
      }
      else {
        iVar1 = 0;
        local_a0 = puVar4;
        if (*param_1 < 5) {
          local_e0 = local_res8 + 0x38;
          uVar6 = *param_1;
          do {
            iVar1 = FUN_0096dd91();
            if ((iVar1 != 0) || (iVar1 = FUN_0096dd91(), iVar1 != 0)) goto LAB_0096e5b9;
            *param_4 = 0xffffffff;
            iVar1 = FUN_0096e692(local_90,(uint64_t)local_8c + lVar2,local_94,param_3,&local_a8,
                                 local_88,param_6,param_7,param_8,param_9);
            if (iVar1 != 0x142) {
              if (iVar1 != 0) goto LAB_0096e5b9;
              *param_1 = uVar6;
              iVar1 = 0;
              goto LAB_0096e44d;
            }
            bVar7 = uVar6 < 4;
            uVar6 = uVar6 + 1;
          } while (bVar7);
          iVar1 = 0x142;
        }
LAB_0096e44d:
        puVar4 = local_a0;
        uVar3 = this_ptr + (uint64_t)local_ac;
        uVar5 = (uint64_t)local_8c + lVar2 + (uint64_t)local_90;
        if ((uVar5 < uVar3) && (iVar1 == 0)) {
          uVar6 = local_94 & 0x7f;
          while (lVar2 = FUN_0096e5e3(0x30,(int)uVar3 - (int)uVar5,&local_8c,&local_90), lVar2 != 0)
          {
            uVar5 = lVar2 + (uint64_t)local_90 + (uint64_t)local_8c;
            iVar1 = 0;
            if (((((local_94 >> 0x1e & 1) != 0) && (uVar3 <= uVar5)) ||
                (((local_94 >> 0x1d & 1) != 0 && (*param_3 <= uVar6)))) ||
               (((local_94 >> 0x1c & 1) != 0 && (uVar6 == (byte)local_a0[0x10]))))
            goto LAB_0096e5b9;
            iVar1 = FUN_0096e692((uint64_t)local_90,lVar2 + (uint64_t)local_8c,local_94,param_3,
                                 &local_a8,local_88,param_6,param_7,param_8,param_9);
            puVar4[0x10] = puVar4[0x10] + '\x01';
            if ((uVar3 <= uVar5) || (iVar1 != 0)) goto LAB_0096e58f;
          }
          iVar1 = 0;
        }
LAB_0096e58f:
        if (local_res20 != (void*)0x0) {
          *local_res20 = local_a8;
        }
        if (param_5 != 0) {
          FUN_0097425b();
        }
      }
    }
  }
LAB_0096e5b9:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return iVar1;
}

