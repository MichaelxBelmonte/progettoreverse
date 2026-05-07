// Function: FUN_00efb761
// Address: 00efb761
// Size: 926 bytes
// Class: Unknown

int * FUN_00efb761(int64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t arg1;
  int *this_ptr;
  int64_t lVar7;
  uint32_t local_res10;
  uint64_t local_res18;
  uint64_t local_res20;
  
  uVar5 = *(void*)(arg1 + 0x30);
  uVar3 = *(void*)(arg1 + 0x20);
  uVar1 = *(void*)(arg1 + 0x28);
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  _ZSTD_seqToCodes();
  this_ptr[8] = 0;
  uVar3 = _HIST_countFast_wksp(param_2,uVar3,local_res20,param_5);
  *(void*)(param_3 + 0xddc) = *(void*)(param_1 + 0xddc);
  iVar2 = _ZSTD_selectEncodingType(uVar3,0x23,param_2,9,local_res10);
  *this_ptr = iVar2;
  uVar4 = _ZSTD_buildCTable(9,param_3 + 0x8b0,iVar2,local_res18,6,0x23,param_1 + 0x8b0,0x524,
                            local_res20,param_5);
  if (uVar4 < 0xffffffffffffff89) {
    if (iVar2 == 2) {
      *(uint64_t *)(this_ptr + 6) = uVar4;
    }
    uVar5 = _HIST_countFast_wksp(param_2,uVar5,local_res20,param_5);
    *(void*)(param_3 + 0xdd4) = *(void*)(param_1 + 0xdd4);
    iVar2 = _ZSTD_selectEncodingType(uVar5,0x1f,param_2,8,local_res10);
    this_ptr[1] = iVar2;
    uVar6 = _ZSTD_buildCTable(8,param_3,iVar2,local_res18,5,0x1c,param_1,0x304,local_res20,param_5);
    if (uVar6 < 0xffffffffffffff89) {
      if (iVar2 == 2) {
        *(uint64_t *)(this_ptr + 6) = uVar6;
      }
      lVar7 = uVar4 + uVar6;
      uVar5 = _HIST_countFast_wksp(param_2,uVar1,local_res20,param_5);
      *(void*)(param_3 + 0xdd8) = *(void*)(param_1 + 0xdd8);
      iVar2 = _ZSTD_selectEncodingType(uVar5,0x34,param_2,9,local_res10);
      this_ptr[2] = iVar2;
      uVar6 = _ZSTD_buildCTable(9,param_3 + 0x304,iVar2,local_res18,6,0x34,param_1 + 0x304,0x5ac,
                                local_res20,param_5);
      if (uVar6 < 0xffffffffffffff89) {
        if (iVar2 == 2) {
          *(uint64_t *)(this_ptr + 6) = uVar6;
        }
        *(uint64_t *)(this_ptr + 4) = lVar7 + uVar6;
        return this_ptr;
      }
    }
    *(uint64_t *)(this_ptr + 4) = uVar6;
  }
  else {
    *(uint64_t *)(this_ptr + 4) = uVar4;
  }
  return this_ptr;
}

