// Function: FUN_01048150
// Address: 01048150
// Size: 583 bytes
// Class: Unknown


void FUN_01048150(undefined8 param_1,int param_2,byte *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  byte *unaff_RSI;
  byte *unaff_RDI;
  byte bVar9;
  code *local_res8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58 [32];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)(param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 8);
  uStack_5c = *(undefined4 *)(param_3 + 0xc);
  (*local_res8)(local_68,param_1);
  bVar5 = *param_3 ^ *unaff_RDI;
  local_58[0] = *unaff_RDI;
  if (param_4 != 0) {
    local_58[0] = bVar5;
  }
  iVar7 = param_2 + 7;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  *unaff_RSI = bVar5;
  if (param_2 % 8 == 0) {
    uVar4 = (ulonglong)(uint)(iVar7 >> 3);
    uVar1 = *(undefined4 *)((longlong)&uStack_64 + uVar4);
    uVar2 = *(undefined4 *)((longlong)&uStack_60 + uVar4);
    uVar3 = *(undefined4 *)(local_58 + (uVar4 - 4));
    *(undefined4 *)param_3 = *(undefined4 *)((longlong)&local_68 + uVar4);
    *(undefined4 *)(param_3 + 4) = uVar1;
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 0xc) = uVar3;
    lVar8 = *(longlong *)PTR____stack_chk_guard_024a9898;
  }
  else {
    lVar8 = (longlong)(iVar7 >> 3);
    bVar6 = (byte)(param_2 % 8);
    bVar5 = *(byte *)((longlong)&local_68 + lVar8 + 1);
    bVar9 = 8 - bVar6;
    *param_3 = bVar5 >> (bVar9 & 0x1f) | *(char *)((longlong)&local_68 + lVar8) << (bVar6 & 0x1f);
    param_3[1] = *(byte *)((longlong)&local_68 + lVar8 + 2) >> (bVar9 & 0x1f) |
                 bVar5 << (bVar6 & 0x1f);
    param_3[2] = *(byte *)((longlong)&local_68 + lVar8 + 3) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&local_68 + lVar8 + 2) << (bVar6 & 0x1f);
    param_3[3] = *(byte *)((longlong)&uStack_64 + lVar8) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&local_68 + lVar8 + 3) << (bVar6 & 0x1f);
    param_3[4] = *(byte *)((longlong)&uStack_64 + lVar8 + 1) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&uStack_64 + lVar8) << (bVar6 & 0x1f);
    param_3[5] = *(byte *)((longlong)&uStack_64 + lVar8 + 2) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&uStack_64 + lVar8 + 1) << (bVar6 & 0x1f);
    param_3[6] = *(byte *)((longlong)&uStack_64 + lVar8 + 3) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&uStack_64 + lVar8 + 2) << (bVar6 & 0x1f);
    param_3[7] = *(byte *)((longlong)&uStack_60 + lVar8) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&uStack_64 + lVar8 + 3) << (bVar6 & 0x1f);
    param_3[8] = *(byte *)((longlong)&uStack_60 + lVar8 + 1) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&uStack_60 + lVar8) << (bVar6 & 0x1f);
    param_3[9] = *(byte *)((longlong)&uStack_60 + lVar8 + 2) >> (bVar9 & 0x1f) |
                 *(char *)((longlong)&uStack_60 + lVar8 + 1) << (bVar6 & 0x1f);
    param_3[10] = *(byte *)((longlong)&uStack_60 + lVar8 + 3) >> (bVar9 & 0x1f) |
                  *(char *)((longlong)&uStack_60 + lVar8 + 2) << (bVar6 & 0x1f);
    param_3[0xb] = local_58[lVar8 + -4] >> (bVar9 & 0x1f) |
                   *(char *)((longlong)&uStack_60 + lVar8 + 3) << (bVar6 & 0x1f);
    param_3[0xc] = local_58[lVar8 + -3] >> (bVar9 & 0x1f) | local_58[lVar8 + -4] << (bVar6 & 0x1f);
    param_3[0xd] = local_58[lVar8 + -2] >> (bVar9 & 0x1f) | local_58[lVar8 + -3] << (bVar6 & 0x1f);
    param_3[0xe] = local_58[lVar8 + -1] >> (bVar9 & 0x1f) | local_58[lVar8 + -2] << (bVar6 & 0x1f);
    param_3[0xf] = local_58[lVar8] >> (bVar9 & 0x1f) | local_58[lVar8 + -1] << (bVar6 & 0x1f);
    lVar8 = *(longlong *)PTR____stack_chk_guard_024a9898;
  }
  if (lVar8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


