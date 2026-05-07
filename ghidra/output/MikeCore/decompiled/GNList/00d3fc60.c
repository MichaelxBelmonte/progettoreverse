// Function: FUN_00d3fc60
// Address: 00d3fc60
// Size: 1128 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d3ff52) */

void FUN_00d3fc60(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  undefined8 local_110;
  undefined1 local_108;
  longlong local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  int local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  uint local_34;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x368))();
  lVar3 = DAT_0277d8d0;
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d400c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
    return;
  }
  if (DAT_0277d8d0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_110 = 0;
  local_108 = 0;
  FUN_00d40470(&local_110,&stack0xfffffffffffffee0,3,3);
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_64 = 0;
  local_34 = 0;
LAB_00d3fd60:
  do {
    FUN_00d402b0();
    lVar3 = local_60;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d3fdb0;
      }
    }
    else if (local_60 != 0) {
LAB_00d3fdb0:
      local_100 = lVar3;
      local_f8 = 0;
      FUN_00d40c80();
      FUN_00d50b20();
      goto LAB_00d3fd60;
    }
    lVar3 = *(longlong *)(unaff_RDI + 0x30);
    if ((*(int *)(lVar3 + 0xc) == 0) || (*(longlong *)(unaff_RDI + 0x18) == 0)) goto LAB_00d40002;
    local_78 = 0;
    FUN_00d50b00();
    local_78 = '\x01';
    local_80 = lVar3;
    FUN_00d40ea0();
    local_70 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    iVar1 = FUN_00c8d630();
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if (lVar3 != 0) {
          FUN_00e83070();
        }
        iVar2 = FUN_00c8d630();
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    FUN_00c8e1f0();
    FUN_00d216c0();
    lVar3 = DAT_0277d8d8;
    if ((local_34 & 1) == 0) {
      if (DAT_0277d8d8 != 0) {
        FUN_00d50b00();
      }
      local_f0 = lVar3;
      local_e8 = 1;
      FUN_00d50b00();
      local_d0 = 0;
      local_c8 = 0;
      FUN_00d40470(&local_d0,&stack0xffffffffffffff20,3,3);
      uVar4 = FUN_00d50b20();
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_70 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_50 = local_70;
      local_48 = 0xffffffff;
      local_40 = 0;
      while( true ) {
        lVar3 = (longlong)(int)local_48;
        iVar1 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar1);
        if (*(int *)(local_50 + 0xc) <= iVar1) break;
        local_c0 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
        local_b8 = 0;
        local_60 = local_c0;
        FUN_00d40820();
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar1 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar1 = 0;
          }
          local_48 = CONCAT44(iVar1,(int)local_48);
        }
      }
      FUN_00d42680();
      FUN_00d50b20();
    }
    local_64 = local_64 + 1;
    if (local_64 == 0x100000) {
LAB_00d40002:
      lVar3 = DAT_0277d8e0;
      if ((local_34 & 1) != 0) {
        if (DAT_0277d8e0 != 0) {
          FUN_00d50b00();
        }
        local_b0 = lVar3;
        local_a8 = 1;
        FUN_00d50b00();
        local_90 = 0;
        local_88 = 0;
        FUN_00d40470(&local_90,&stack0xffffffffffffff60,3,3);
        FUN_00d50b20();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x378))();
      return;
    }
  } while( true );
}


