// Function: FUN_00cb8850
// Address: 00cb8850
// Size: 1634 bytes
// Class: Unknown
// String references:
//   "Remove %@"


void FUN_00cb8850(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  longlong local_148;
  char local_140;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 *local_68;
  uint local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  local_100 = *unaff_RSI;
  local_f8 = '\0';
  local_f0 = *param_1;
  local_e8 = '\0';
  local_70 = param_2;
  cVar1 = (**(code **)(*unaff_RDI + 0x408))(param_1,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    local_e0 = *local_70;
    local_d8 = '\0';
    (**(code **)(*unaff_RDI + 0x3e0))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((unaff_RDI[0x12] != 0) && ((char)unaff_RDI[0x1c] != '\0')) && ((int)unaff_RDI[0x1a] == 0)) {
    FUN_00cb6da0(2);
    plVar2 = (longlong *)(**(code **)(*(longlong *)*unaff_RSI + 0x188))();
    if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
      local_d0 = *param_1;
      local_c8 = '\0';
      cVar1 = (**(code **)(*(longlong *)*unaff_RSI + 0x2b8))();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (((cVar1 != '\0') && (*local_70 != 0)) && (lVar3 = *plVar2, lVar3 != 0)) {
        FUN_00d50b00();
        local_60 = local_60 & 0xffffff00;
        local_68 = (undefined8 *)0x0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_108 = lVar3;
        local_58 = lVar3;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar6 = -local_50._4_4_;
            }
            else {
              iVar6 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar6 = 0;
            }
            local_50 = CONCAT44(iVar6,(int)local_50);
          }
          lVar3 = (longlong)(int)local_50;
          iVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (*(int *)(local_58 + 0xc) <= iVar6) break;
          local_68 = *(undefined8 **)(*(longlong *)(local_58 + 0x10) + 8 + lVar3 * 8);
          FUN_00e17bc0();
          if (local_40 == (longlong *)0x0) {
            bVar7 = true;
          }
          else {
            FUN_00e17bc0();
            if (local_90 == 0) {
              bVar7 = false;
            }
            else {
              FUN_00e17bc0();
              bVar7 = local_148 == *param_1;
              if ((local_140 != '\0') && (local_148 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            plVar2 = (longlong *)*local_70;
            FUN_00e8b690();
            plVar5 = &DAT_02802688;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar1 = FUN_00e85ea0();
              plVar5 = local_70;
              if (cVar1 == '\0') {
                plVar5 = &DAT_02802688;
              }
            }
            if (*plVar5 != 0) {
              pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00e17ba0();
              local_c0 = 0;
              local_b8 = '\0';
              FUN_00e8c420();
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                (**(code **)(*local_40 + 0x10))();
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_00cc12b0();
        FUN_00d50b20();
      }
    }
  }
  if ((((*(char *)((longlong)unaff_RDI + 0xe1) != '\0') && (unaff_RDI[8] != 0)) &&
      (cVar1 = FUN_00db3680(), cVar1 == '\0')) &&
     ((cVar1 = FUN_00db3920(), cVar1 != '\0' && (cVar1 = FUN_00d74560(), cVar1 == '\0')))) {
    local_b0 = *param_1;
    local_a8 = '\0';
    cVar1 = (**(code **)(*(longlong *)*unaff_RSI + 0x358))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d74470();
      lVar3 = local_90;
      local_60 = 1;
      local_68 = &DAT_024c5048;
      local_50 = local_50 & 0xffffffffffffff00;
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = CONCAT71(local_50._1_7_,1);
      FUN_00d8cb40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_00db31b0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_68 = &DAT_024c5048;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar1 = FUN_00d74560();
  if (cVar1 == '\0') {
    local_a0 = *param_1;
    local_98 = '\0';
    cVar1 = (**(code **)(*(longlong *)*unaff_RSI + 0x350))();
    if ((cVar1 == '\0') || (unaff_RDI[0x26] == 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = *(char *)((longlong)unaff_RDI + 0xe1) != '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      local_128 = *local_70;
      local_120 = 0;
      local_118 = *param_1;
      local_110 = 0;
      FUN_00cb91c0(&local_118,&local_128);
    }
  }
  return;
}


