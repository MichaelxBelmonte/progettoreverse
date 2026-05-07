// Function: FUN_01bc09c0
// Address: 01bc09c0
// Size: 1144 bytes
// Class: GNList


longlong * FUN_01bc09c0(void)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined8 in_RAX;
  ulonglong *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong lVar9;
  longlong *unaff_RDI;
  uint uVar10;
  longlong local_b0;
  undefined1 local_a8;
  ulonglong local_a0;
  char local_98;
  int local_74;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  char local_40;
  undefined4 local_34;
  
  lVar2 = local_70;
  if ((unaff_RSI[7] == 0) || (in_RAX = (**(code **)(*unaff_RSI + 0x3b8))(), local_70 == 0)) {
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    local_74 = 0;
  }
  else {
    if ((local_68[0] == '\0') && ((FUN_00d50b00(), local_68[0] != '\0' && (local_70 != 0)))) {
      FUN_00d50b20();
    }
    local_74 = *(int *)(local_70 + 0xc);
    if (0 < local_74) {
      local_68[0] = '\0';
      local_70 = 0;
      local_60 = lVar2;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        iVar4 = (int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)(local_60 + 0xc) <= iVar8) break;
        local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (longlong)iVar8 * 8);
        lVar2 = unaff_RSI[4];
        iVar1 = *(int *)(lVar2 + 0xc);
        lVar7 = (longlong)(iVar8 + local_50);
        if ((iVar1 <= iVar8 + local_50) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8) + 0x20) != local_70
           )) {
          lVar9 = lVar7 << 0x20;
          uVar10 = ~(iVar4 + local_50);
          do {
            lVar7 = lVar7 + 1;
            if (iVar1 <= lVar7) goto LAB_01bc0b42;
            lVar9 = lVar9 + 0x100000000;
            uVar10 = uVar10 - 1;
          } while (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8) + 0x20) ==
                   local_70);
          if (uVar10 == 1) {
LAB_01bc0b42:
            local_a8 = 0;
            local_b0 = local_70;
            FUN_01bc1070((longlong)iVar1,&local_b0);
            uVar3 = local_a0;
            if (local_98 == '\0') {
              if (local_a0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_98 = '\0';
            }
            local_48 = uVar3;
            local_40 = '\0';
            FUN_00d23370();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (uVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + (lVar9 >> 0x1d));
            if (uVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23620();
            local_40 = '\0';
            local_48 = uVar3;
            FUN_00d23370();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (uVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      FUN_00083b20();
    }
    local_34 = 0;
  }
  while (lVar2 = unaff_RSI[4], local_74 < *(int *)(lVar2 + 0xc)) {
    FUN_00d23340();
    local_48 = CONCAT71(local_48._1_7_,local_68[0]);
    puVar6 = (ulonglong *)local_68;
    if (local_68[0] == '\0') {
      puVar6 = &local_48;
    }
    *(char *)puVar6 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_48 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffffffffffff00;
    }
    local_68[0] = '\0';
    cVar5 = FUN_00d23d70();
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_00d23340();
      local_48 = CONCAT71(local_48._1_7_,local_68[0]);
      puVar6 = (ulonglong *)local_68;
      if (local_68[0] == '\0') {
        puVar6 = &local_48;
      }
      *(char *)puVar6 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_48 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = local_48 & 0xffffffffffffff00;
      }
      local_68[0] = '\0';
      FUN_00d23f50();
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d23340();
    local_48 = CONCAT71(local_48._1_7_,local_68[0]);
    puVar6 = (ulonglong *)local_68;
    if (local_68[0] == '\0') {
      puVar6 = &local_48;
    }
    *(char *)puVar6 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50130();
    if (((char)local_48 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  *(int *)(unaff_RSI + 0xb) = local_74;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  FUN_00d50b00();
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


