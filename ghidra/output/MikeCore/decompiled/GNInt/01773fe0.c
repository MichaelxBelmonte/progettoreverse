// Function: FUN_01773fe0
// Address: 01773fe0
// Size: 551 bytes
// Class: GNInt


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01773fe0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int unaff_ESI;
  undefined4 uVar4;
  float fVar5;
  longlong local_50;
  char local_48;
  float local_40;
  undefined1 local_38 [4];
  float local_34;
  
  FUN_01774880(local_38,unaff_ESI);
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  iVar1 = *(int *)(local_50 + 0x18);
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar2 >> 2 == 0) {
    iVar1 = FUN_01774300();
    iVar2 = FUN_01774300();
    local_34 = (float)FUN_01774b50();
    fVar5 = (float)FUN_01774b50();
    local_34 = (float)(unaff_ESI - iVar1) * ((fVar5 - local_34) / (float)(iVar2 - iVar1)) + local_34
    ;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xfff0bdc0;
    }
  }
  else if (iVar2 >> 2 == 1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(local_50 + 0x10);
    }
    local_34 = (float)FUN_01774b50();
  }
  else {
    local_34 = 0.0;
    if (7 < iVar1) {
      local_34 = 0.0;
      lVar3 = 0;
      do {
        fVar5 = (float)FUN_01774b50();
        lVar3 = lVar3 + 1;
        iVar1 = *(int *)(local_50 + 0x18);
        iVar2 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        local_34 = local_34 + fVar5;
      } while (lVar3 < iVar2 >> 2);
      uVar4 = **(undefined4 **)(local_50 + 0x10);
      if (3 < iVar1) {
        local_34 = local_34 / (float)(iVar2 >> 2);
        local_40 = DAT_02411fd8;
        lVar3 = 1;
        while( true ) {
          fVar5 = (float)FUN_01774b50();
          fVar5 = (float)((uint)(fVar5 - local_34) & _DAT_02390140);
          if (fVar5 < local_40) {
            uVar4 = *(undefined4 *)(*(longlong *)(local_50 + 0x10) + -4 + lVar3 * 4);
            local_40 = fVar5;
          }
          iVar1 = *(int *)(local_50 + 0x18);
          iVar2 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar2 = iVar1;
          }
          if (iVar2 >> 2 <= lVar3) break;
          lVar3 = lVar3 + 1;
        }
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uVar4;
      }
      local_34 = (float)FUN_01774b50();
    }
  }
  FUN_00d50b20();
  return local_34;
}


