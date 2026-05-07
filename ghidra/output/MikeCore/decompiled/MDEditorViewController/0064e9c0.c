// Function: FUN_0064e9c0
// Address: 0064e9c0
// Size: 2081 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x0064f083) */
/* WARNING: Removing unreachable block (ram,0x0064f08f) */
/* WARNING: Removing unreachable block (ram,0x0064ed6e) */
/* WARNING: Removing unreachable block (ram,0x0064ed7a) */
/* WARNING: Removing unreachable block (ram,0x0064eb0a) */
/* WARNING: Removing unreachable block (ram,0x0064eb16) */
/* WARNING: Removing unreachable block (ram,0x0064ee9e) */
/* WARNING: Removing unreachable block (ram,0x0064eeaa) */
/* WARNING: Removing unreachable block (ram,0x0064ef04) */
/* WARNING: Removing unreachable block (ram,0x0064ef10) */
/* WARNING: Removing unreachable block (ram,0x0064f186) */
/* WARNING: Removing unreachable block (ram,0x0064f18f) */

void FUN_0064e9c0(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_e8;
  char local_e0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  lVar1 = *(longlong *)(unaff_RSI + 0x80);
  local_68 = param_2;
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_0053a480();
    if (local_40 == 0) {
      bVar2 = false;
    }
    else {
      FUN_0053a480();
      bVar2 = 0 < *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_0053a480();
      FUN_00d23310();
      lVar7 = local_40;
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar6 = &local_78;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_78 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (lVar7 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_0064ebab;
      FUN_004f9670();
      lVar7 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        local_60 = 0;
        lVar7 = 0;
      }
      else {
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_004fae50();
        lVar7 = local_40;
        if (local_40 == 0) {
          lVar7 = 0;
          local_60 = 0;
        }
        else if (local_38[0] == '\0') {
          uVar5 = FUN_00d50b00();
          local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
          local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (lVar7 != 0) goto LAB_0064f19c;
    }
    else {
LAB_0064ebab:
      local_60 = 0;
    }
    FUN_0053a050();
    if (local_40 == 0) {
      bVar2 = false;
    }
    else {
      FUN_0053a050();
      bVar2 = 0 < *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_0053a050();
      FUN_00d23310();
      lVar7 = local_40;
      param_1 = CONCAT31((int3)(param_1 >> 8),local_38[0]);
      pcVar6 = local_48;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_48[0] = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar3 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_004f9670();
        lVar7 = local_40;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_004f9670();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_004fae50();
          lVar7 = local_40;
          if (local_40 == 0) {
            lVar7 = 0;
          }
          else if (local_38[0] == '\0') {
            uVar5 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if (lVar7 != 0) goto LAB_0064f19c;
      }
    }
  }
  if (*local_68 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01653bd0();
    lVar7 = local_40;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01653bd0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8f20();
      lVar7 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_004f9670();
        lVar7 = local_40;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_004f9670();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_004fae50();
          lVar7 = local_40;
          if (local_40 == 0) {
            lVar7 = 0;
          }
          else if (local_38[0] == '\0') {
            uVar5 = FUN_00d50b00();
            local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        goto LAB_0064f19c;
      }
    }
  }
  lVar7 = 0;
LAB_0064f19c:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_60 == '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


