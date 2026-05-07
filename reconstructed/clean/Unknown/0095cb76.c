// Function: FUN_0095cb76
// Address: 0095cb76
// Size: 546 bytes
// Class: Unknown

uint64_t FUN_0095cb76(uint64_t param_1,uint64_t param_2)

{
  ushort uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t arg1;
  uint64_t uVar10;
  int64_t this_ptr;
  uint64_t uVar11;
  uint uVar12;
  
  uVar3 = 1;
  if (*(short *)(this_ptr + 0xcc) == 0) {
    if (param_2 != 0) {
      uVar1 = *(ushort *)(this_ptr + 0xce) >> 3;
      uVar8 = (uint64_t)uVar1;
      uVar10 = 0;
      do {
        uVar6 = *(uint *)(this_ptr + 200);
        uVar11 = param_2 - uVar10;
        if ((param_2 < uVar10 + uVar8) || (uVar6 != 0)) {
          uVar5 = (uint)uVar1;
          uVar7 = (uint64_t)(uVar5 - uVar6);
          if (uVar6 + (int)uVar11 <= uVar5) {
            uVar7 = uVar11 & 0xffffffff;
          }
          uVar2 = (uint)uVar7;
          if (uVar6 == 0) {
            FUN_0095d18d(uVar8,uVar7 >> 3);
            FUN_0095d128(0,(uint64_t)(uVar2 & 0xfffffff8) + arg1,uVar2 & 7);
          }
          else if (uVar2 != 0) {
            uVar6 = uVar6 & 7;
            lVar4 = arg1;
            uVar11 = uVar7;
            do {
              uVar9 = (uint64_t)(8 - uVar6);
              if ((uint)uVar11 < 8 - uVar6) {
                uVar9 = uVar11;
              }
              FUN_0095d128(uVar6,lVar4,uVar9);
              lVar4 = lVar4 + uVar9;
              uVar6 = 0;
              uVar12 = (uint)uVar11 - (int)uVar9;
              uVar11 = (uint64_t)uVar12;
            } while (uVar12 != 0);
          }
          uVar10 = uVar10 + uVar7;
          arg1 = arg1 + uVar7;
          uVar2 = uVar2 + *(int *)(this_ptr + 200);
          *(uint *)(this_ptr + 200) = uVar2;
          if (uVar2 == uVar5) {
            FUN_0095d2b2();
            *(void*)(this_ptr + 200) = 0;
          }
        }
        else if ((uVar1 & 7) == 0) {
          lVar4 = FUN_0095eacc(uVar11,arg1,0);
          uVar10 = uVar10 + lVar4;
          arg1 = arg1 + lVar4;
        }
        else {
          for (; uVar8 <= uVar11; uVar11 = uVar11 - uVar8) {
            FUN_0095d18d();
            FUN_0095d128(0,arg1 + (uint64_t)(uVar1 & 0xfffffff8),uVar1 & 7);
            FUN_0095d2b2();
            arg1 = arg1 + uVar8;
          }
          uVar10 = param_2 - uVar11;
        }
      } while (uVar10 < param_2);
    }
    uVar3 = 0;
  }
  return uVar3;
}

