// Function: FUN_012549c0
// Address: 012549c0
// Size: 1800 bytes
// Class: GNNull


void FUN_012549c0(ulonglong param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong lVar11;
  undefined4 local_74;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  char local_48;
  ulonglong local_40;
  char local_38;
  
  local_38 = '\0';
  local_40 = 0;
  local_70 = param_2;
  if (param_3 == 0) {
LAB_01254ecb:
    local_60 = param_1;
    if (((local_70 >> 0x20 != 0) && (param_1 = param_1 >> 0x20, param_1 != 0)) &&
       (cVar5 = FUN_00e7c020(), cVar5 == '\0')) goto LAB_012550b3;
  }
  else {
    local_60 = param_1;
    if (param_2 >> 0x20 != 0) {
      lVar11 = *unaff_RSI;
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        lVar11 = *unaff_RSI;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      iVar6 = FUN_01251eb0();
      if (iVar6 < 1) {
        local_58 = FUN_00e7bdb0();
        lVar8 = *(longlong *)(lVar11 + 0x48);
      }
      else {
        lVar8 = *(longlong *)(lVar11 + 0x48);
        local_58 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(iVar6 - 1) * 8);
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar10 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar6 < iVar10 >> 3) {
        local_68 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar6 * 8);
      }
      else {
        local_68 = FUN_00e7bdb0();
      }
      cVar5 = local_38;
      uVar4 = local_40;
      uVar2 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x10) + (longlong)iVar6 * 8);
      if (local_40 == uVar2) {
        if ((local_38 == '\0') && (uVar2 != 0)) {
          FUN_00d50b00();
          goto LAB_01254af5;
        }
      }
      else {
        if (uVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = uVar2;
        if ((cVar5 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_01254af5:
        local_38 = '\x01';
      }
      if (local_40 != 0) {
        FUN_00d51d20();
        cVar5 = local_38;
        uVar4 = local_40;
        uVar2 = local_50;
        if (local_40 == local_50) {
          if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01254b86;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01254b82;
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            local_40 = uVar2;
            if ((cVar5 != '\0') && (uVar4 != 0)) {
              FUN_00d50b20();
            }
LAB_01254b82:
            local_38 = '\x01';
LAB_01254b86:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01254b9a;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\x01';
      }
LAB_01254b9a:
      local_50 = local_60;
      if (local_60 >> 0x20 == 0) {
        bVar3 = local_68 >> 0x20 == 0;
      }
      else if ((local_68 >> 0x20 == 0) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        bVar3 = true;
        local_68 = local_50;
      }
      else {
        bVar3 = false;
      }
      FUN_012502a0(local_68,local_70,1);
      if (bVar3) goto LAB_012550b3;
      local_70 = local_68;
    }
    param_1 = 0;
    if (local_60 >> 0x20 != 0) {
      local_74 = 0xffffffff;
      lVar11 = *unaff_RSI;
      pvVar7 = _pthread_getspecific((pthread_key_t)(local_60 >> 0x20));
      if (pvVar7 != (void *)0x0) {
        lVar11 = *unaff_RSI;
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
      }
      iVar6 = FUN_01251eb0();
      if (iVar6 < 1) {
        local_58 = FUN_00e7bdb0();
        lVar8 = *(longlong *)(lVar11 + 0x48);
      }
      else {
        lVar8 = *(longlong *)(lVar11 + 0x48);
        local_58 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(iVar6 - 1) * 8);
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      iVar10 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar6 < iVar10 >> 3) {
        local_68 = *(ulonglong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar6 * 8);
      }
      else {
        local_68 = FUN_00e7bdb0();
      }
      cVar5 = local_38;
      uVar4 = local_40;
      pVar9 = (pthread_key_t)lVar8;
      uVar2 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x10) + (longlong)iVar6 * 8);
      if (local_40 == uVar2) {
        if ((local_38 == '\0') && (uVar2 != 0)) {
          FUN_00d50b00();
          goto LAB_01254d2c;
        }
      }
      else {
        if (uVar2 != 0) {
          FUN_00d50b00();
        }
        local_40 = uVar2;
        if ((cVar5 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_01254d2c:
        local_38 = '\x01';
      }
      if (((local_58._4_4_ != 0) && (local_60._4_4_ != 0)) &&
         (cVar5 = FUN_00e7c000(), cVar5 != '\0')) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012535e0(&local_58,&local_40,&local_68,&local_74);
      }
      if (local_40 != 0) {
        FUN_00d51d20();
        cVar5 = local_38;
        uVar4 = local_40;
        uVar2 = local_50;
        if (local_40 == local_50) {
          if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01254e2a;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01254e26;
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            local_40 = uVar2;
            if ((cVar5 != '\0') && (uVar4 != 0)) {
              FUN_00d50b20();
            }
LAB_01254e26:
            local_38 = '\x01';
LAB_01254e2a:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01254e3e;
          }
          local_40 = local_50;
          if ((local_38 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\x01';
      }
LAB_01254e3e:
      local_50 = local_70;
      if (local_70 >> 0x20 == 0) {
        bVar3 = local_58 >> 0x20 == 0;
      }
      else if ((local_58 >> 0x20 == 0) || (cVar5 = FUN_00e7c020(), cVar5 == '\0')) {
        bVar3 = true;
        local_58 = local_50;
      }
      else {
        bVar3 = false;
      }
      FUN_012502a0(local_60,local_58,1);
      param_1 = local_58;
      if (bVar3) goto LAB_012550b3;
      goto LAB_01254ecb;
    }
  }
  local_74 = 0xffffffff;
  while( true ) {
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_01252960(local_60,local_70,&local_40,&local_58);
    if (cVar5 == '\0') break;
    if (local_40 != 0) {
      FUN_00d51d20();
      cVar5 = local_38;
      uVar4 = local_40;
      uVar2 = local_50;
      if (local_40 == local_50) {
        if ((local_38 != '\0') || (local_50 == 0)) goto LAB_01255038;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01255034;
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          local_40 = uVar2;
          if ((cVar5 != '\0') && (uVar4 != 0)) {
            FUN_00d50b20();
          }
LAB_01255034:
          local_38 = '\x01';
LAB_01255038:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01255050;
        }
        local_40 = local_50;
        if ((local_38 != '\0') && (uVar4 != 0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\x01';
    }
LAB_01255050:
    if ((local_70 >> 0x20 != 0) &&
       ((local_58._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
      local_58 = local_70;
    }
    if ((local_60 >> 0x20 != 0) &&
       ((local_68._4_4_ == 0 || (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
      local_68 = local_60;
    }
    param_1 = local_68;
    FUN_012502a0(local_68,local_58,0);
  }
LAB_012550b3:
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


