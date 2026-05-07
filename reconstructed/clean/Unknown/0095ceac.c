// Function: FUN_0095ceac
// Address: 0095ceac
// Size: 565 bytes
// Class: Unknown

uint64_t FUN_0095ceac(uint64_t param_1,uint64_t param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  
  uVar2 = *(ushort *)(this_ptr + 0xce);
  if (*(short *)(this_ptr + 0xcc) == 0) {
    FUN_0095cd98();
  }
  if (param_2 != 0) {
    uVar2 = uVar2 >> 3;
    uVar9 = (uint64_t)uVar2;
    uVar6 = 0;
    do {
      uVar5 = *(uint *)(this_ptr + 200);
      uVar11 = (uint)uVar2;
      if (uVar5 == uVar11) {
        if (param_2 < uVar6 + uVar9) {
          FUN_0095d2b2();
          *(void*)(this_ptr + 200) = 0;
          uVar5 = 0;
          goto LAB_0095cf5f;
        }
        uVar7 = param_2 - uVar6;
        if ((uVar2 & 7) == 0) {
          lVar8 = FUN_00960998(uVar7,arg1);
          uVar6 = uVar6 + lVar8;
          arg1 = arg1 + lVar8;
        }
        else {
          for (; uVar9 <= uVar7; uVar7 = uVar7 - uVar9) {
            FUN_0095d2b2();
            FUN_0095ea6d();
            FUN_0095ea0e(0,arg1 + (uint64_t)(uVar2 & 0xfffffff8),uVar2 & 7);
            arg1 = arg1 + uVar9;
          }
          uVar6 = param_2 - uVar7;
        }
      }
      else {
LAB_0095cf5f:
        uVar4 = (int)param_2 - (int)uVar6;
        uVar1 = uVar5 + uVar4;
        uVar3 = uVar11 - uVar5;
        if (uVar1 <= uVar11) {
          uVar3 = uVar4;
        }
        uVar7 = (uint64_t)uVar3;
        if (uVar5 == 0) {
          FUN_0095ea6d(uVar1,uVar3 >> 3);
          FUN_0095ea0e(0,(uint64_t)(uVar3 & 0xfffffff8) + arg1,uVar3 & 7);
        }
        else if (uVar3 != 0) {
          uVar5 = uVar5 & 7;
          lVar8 = arg1;
          uVar12 = uVar7;
          do {
            uVar10 = (uint64_t)(8 - uVar5);
            if ((uint)uVar12 < 8 - uVar5) {
              uVar10 = uVar12;
            }
            FUN_0095ea0e(uVar5,lVar8,uVar10);
            lVar8 = lVar8 + uVar10;
            uVar5 = 0;
            uVar11 = (uint)uVar12 - (int)uVar10;
            uVar12 = (uint64_t)uVar11;
          } while (uVar11 != 0);
        }
        uVar6 = uVar6 + uVar7;
        arg1 = arg1 + uVar7;
        *(int *)(this_ptr + 200) = *(int *)(this_ptr + 200) + uVar3;
      }
    } while (uVar6 < param_2);
  }
  return 0;
}

