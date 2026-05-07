// Function: FUN_01a8f2a0
// Address: 01a8f2a0
// Size: 2053 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01a8f445) */
/* WARNING: Removing unreachable block (ram,0x01a8f44e) */
/* WARNING: Removing unreachable block (ram,0x01a8f8c9) */
/* WARNING: Removing unreachable block (ram,0x01a8f8d2) */

ulonglong FUN_01a8f2a0(ulonglong *param_1,int param_2,ulonglong *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  void *pvVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  ulonglong *puVar10;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint uVar12;
  bool bVar13;
  undefined8 local_a8;
  undefined1 local_a0 [4];
  int local_9c;
  ulonglong *local_98;
  undefined4 local_8c;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  char local_38;
  undefined4 *puVar11;
  
  lVar3 = *(longlong *)(unaff_RDI + 0x30);
  local_68 = param_1;
  local_60 = param_4;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)(unaff_RDI + 0x38);
  puVar10 = (ulonglong *)(ulonglong)uVar1;
  uVar2 = *(uint *)(unaff_RDI + 0x3c);
  if ((uVar2 == uVar1) && (1 < (int)uVar1)) {
    uVar5 = FUN_01a8ff70(local_68,param_2,param_3,local_60);
    goto LAB_01a8fa83;
  }
  if (uVar2 == 0) {
    pvVar6 = _pthread_getspecific(uVar1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caaa0();
    FUN_00e7c860();
    FUN_00e7cc50();
    pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_016c4760();
    if (local_68 != (ulonglong *)0x0) {
      local_50 = CONCAT44(local_50._4_4_,*local_60);
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
      local_78 = uVar5;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
      uVar5 = FUN_016c4760();
      *local_68 = uVar5;
      puVar10 = local_68;
      uVar5 = local_78;
    }
    if (param_3 != (ulonglong *)0x0) {
      local_50 = CONCAT44(local_50._4_4_,*local_60);
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c260();
      uVar8 = FUN_016c4760();
      *param_3 = uVar8;
    }
    goto LAB_01a8fa83;
  }
  uVar12 = uVar2;
  if ((uVar1 == 3) && (uVar12 = 3, uVar2 != 3)) {
    uVar12 = (int)(uVar2 * 3) / 2;
  }
  local_98 = param_3;
  pvVar6 = _pthread_getspecific(uVar1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar11 = local_60;
  local_78 = FUN_016c09d0(local_60,&local_50);
  pVar9 = (pthread_key_t)puVar11;
  FUN_00e7b970();
  local_58 = unaff_RSI;
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar10 = &local_a8;
  FUN_016ca840();
  if ((local_38 == '\0') && (unaff_RSI != 0)) {
    FUN_00d50b00();
  }
  local_70 = FUN_0123fff0();
  local_88 = local_70;
  if (uVar12 != 1) {
    local_70 = FUN_00e7bcc0();
  }
  uVar5 = local_50;
  FUN_00e7c860();
  local_50 = FUN_00e7cd00();
  if ((((param_2 != 1) && (local_50 >> 0x20 != 0)) && (local_88._4_4_ != 0)) &&
     (cVar4 = FUN_00e7c000(), cVar4 != '\0')) {
    FUN_00e7b820();
    uVar5 = uVar5 & 0xffffffff00000000;
    FUN_00e7c240();
    local_78 = (ulonglong)((int)local_78 + 1);
    if (((local_9c != 0) && (local_58._4_4_ != 0)) && (cVar4 = FUN_00e7c020(), cVar4 == '\0')) {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar10 = &local_a8;
      FUN_016ca840(puVar10,local_58,local_a0,local_60);
      uVar8 = unaff_RSI;
      if (unaff_RSI == uVar5) {
LAB_01a8f729:
        unaff_RSI = uVar8;
        if ((local_38 != '\0') && (uVar5 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (uVar5 != 0) {
            FUN_00d50b00();
          }
          uVar8 = uVar5;
          if (unaff_RSI != 0) {
            FUN_00d50b20();
          }
          goto LAB_01a8f729;
        }
        bVar13 = unaff_RSI != 0;
        unaff_RSI = uVar5;
        if (bVar13) {
          FUN_00d50b20();
        }
      }
      local_88 = FUN_0123fff0();
      if (uVar12 == 1) {
        local_70 = local_88;
      }
    }
  }
  uVar5 = local_58;
  FUN_00e7b820();
  pVar9 = (pthread_key_t)puVar10;
  if (local_68 != (ulonglong *)0x0) {
    uVar8 = uVar5 & 0xffffffff00000000;
    if ((local_50._4_4_ == 0) || (cVar4 = FUN_00e7c650(), cVar4 == '\0')) {
      local_8c = *local_60;
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_016cad70();
      local_80 = uVar7;
      if (uVar12 != 1) {
        local_48 = unaff_RSI;
        if ((local_a8._4_4_ == 0) ||
           ((uVar7 >> 0x20 != 0 && (cVar4 = FUN_00e7c020(), cVar4 == '\0')))) {
          uVar8 = local_48;
          if (local_48 == 0) {
            uVar8 = 0;
            bVar13 = false;
          }
          else {
            bVar13 = true;
            FUN_00d50b00();
          }
        }
        else {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016ca840(0,local_80,0,&local_8c);
          if (uVar8 == 0) {
            bVar13 = false;
            uVar8 = 0;
          }
          else {
            bVar13 = true;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        uVar7 = FUN_0123fff0();
        if (((local_70._4_4_ == 0) || (uVar7 >> 0x20 == 0)) ||
           (cVar4 = FUN_00e7c020(), uVar7 = local_80, cVar4 != '\0')) {
          uVar7 = FUN_00e7c8b0();
          if ((uVar7 >> 0x20 == 0) || (cVar4 = FUN_00e7c630(), uVar7 = local_58, cVar4 == '\0')) {
            uVar7 = local_58;
            FUN_00e7b970();
          }
          else {
            FUN_00e7b970();
          }
        }
        unaff_RSI = local_48;
        *local_68 = uVar7;
        puVar10 = local_68;
        if ((bVar13) && (uVar8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01a8f9a6;
      }
    }
    else {
      FUN_00e7b970();
      uVar7 = uVar5;
    }
    *local_68 = uVar7;
    puVar10 = local_68;
  }
LAB_01a8f9a6:
  uVar8 = local_50;
  pVar9 = (pthread_key_t)puVar10;
  if (local_98 != (ulonglong *)0x0) {
    FUN_00e7b820();
    local_80 = uVar8;
    if ((uVar12 == 1) ||
       (((uVar8 >> 0x20 != 0 && (local_88._4_4_ != 0)) && (cVar4 = FUN_00e7c020(), cVar4 == '\0'))))
    {
      pvVar6 = _pthread_getspecific(pVar9);
      puVar10 = local_98;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_016cad70();
      *puVar10 = uVar8;
    }
    else {
      uVar8 = local_58;
      FUN_00e7b820();
      *local_98 = uVar8;
    }
  }
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
LAB_01a8fa83:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return uVar5;
}


