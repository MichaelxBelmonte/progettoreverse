// Function: FUN_00239240
// Address: 00239240
// Size: 2059 bytes
// Class: Unknown


undefined8 * FUN_00239240(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  char *pcVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  char *pcVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_88;
  char local_80;
  longlong *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  longlong *local_38;
  
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    *param_2 = 0;
    if ((char)param_2[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if (*(longlong **)(unaff_RSI + 0x90) == (longlong *)0x0) {
LAB_0023934a:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RSI + 0x90)))();
  plVar10 = local_48;
  local_58 = local_40[0];
  pcVar6 = &local_58;
  if (local_40[0] != '\0') {
    pcVar6 = local_40;
  }
  *pcVar6 = '\0';
  if ((local_40[0] != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    if (*(longlong *)(unaff_RSI + 0x90) == 0) goto LAB_0023934a;
LAB_002392e8:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_002392e8;
  FUN_00d50b20();
  plVar10 = *(longlong **)(unaff_RSI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar10))();
  plVar8 = local_48;
  local_68 = local_40[0];
  pcVar6 = local_40;
  if (local_40[0] == '\0') {
    pcVar6 = &local_68;
  }
  *pcVar6 = '\0';
  if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(unaff_RSI + 0x90);
LAB_00239365:
    FUN_00d50b00();
  }
  else if (local_68 == '\0') goto LAB_00239365;
  (**(code **)(*plVar8 + 0xe20))();
  local_38 = (longlong *)CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 == (longlong *)0x0) || (*(int *)((longlong)local_38 + 0xc) == 0)) {
    pVar7 = *(pthread_key_t *)(unaff_RSI + 0x198);
    if (pVar7 == 2) {
      pVar7 = *(pthread_key_t *)(unaff_RSI + 0x19c);
    }
    if (pVar7 == 1) {
      FUN_00226f20();
      plVar10 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) goto LAB_00239823;
      FUN_00226f20();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650330();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      plVar10 = local_48;
      if (local_38 == local_48) {
LAB_002397a9:
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (local_38 == (longlong *)0x0) {
            local_38 = plVar10;
          }
          else {
            local_38 = plVar10;
            FUN_00d50b20();
          }
          goto LAB_002397a9;
        }
        if (local_38 != (longlong *)0x0) {
          local_38 = local_48;
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        local_38 = plVar10;
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00226f20();
      plVar10 = local_48;
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar10 == (longlong *)0x0) {
        plVar10 = *(longlong **)(unaff_RSI + 0x90);
        (**(code **)(&UNK_00001550 + *plVar10))();
        plVar8 = local_48;
        local_68 = local_40[0];
        pcVar6 = local_40;
        if (local_40[0] == '\0') {
          pcVar6 = &local_68;
        }
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = *(longlong **)(unaff_RSI + 0x90);
LAB_002396e2:
          FUN_00d50b00();
        }
        else if (local_68 == '\0') goto LAB_002396e2;
        (**(code **)(*plVar8 + 0x9b0))();
        plVar8 = (longlong *)CONCAT71(uStack_57,local_58);
        if (local_38 == plVar8) {
LAB_002397fe:
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50 == '\0') {
            if (plVar8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar11 = local_38 != (longlong *)0x0;
            local_38 = plVar8;
            if (bVar11) {
              FUN_00d50b20();
            }
            goto LAB_002397fe;
          }
          if (local_38 != (longlong *)0x0) {
            local_38 = plVar8;
            FUN_00d50b20();
          }
          local_50 = '\0';
          local_38 = plVar8;
        }
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00239823;
      }
      FUN_00226f20();
      lVar1 = CONCAT71(uStack_67,local_68);
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165a070();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      plVar10 = local_48;
      if (local_38 == local_48) {
LAB_00239760:
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (local_38 == (longlong *)0x0) {
            local_38 = plVar10;
          }
          else {
            local_38 = plVar10;
            FUN_00d50b20();
          }
          goto LAB_00239760;
        }
        if (local_38 != (longlong *)0x0) {
          local_38 = local_48;
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        local_38 = plVar10;
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00239823:
  cVar4 = FUN_00240bc0();
  if (cVar4 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    plVar10 = local_38;
    goto LAB_00239a2c;
  }
  if (param_2 != (longlong *)0x0) {
    FUN_00d23310();
    plVar10 = local_48;
    pcVar6 = local_40;
    pcVar9 = &local_68;
    if (local_40[0] != '\0') {
      pcVar9 = pcVar6;
    }
    local_68 = local_40[0];
    *pcVar9 = '\0';
    if ((local_40[0] != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    lVar2 = CONCAT71(uStack_57,local_58);
    lVar1 = *param_2;
    if (lVar1 == lVar2) {
      if (((char)param_2[1] != '\0') || (lVar2 == 0)) goto LAB_00239974;
      if (local_50 == '\0') {
        FUN_00d50b00();
        goto LAB_0023996d;
      }
LAB_0023992f:
      local_70 = param_2 + 1;
      *(undefined1 *)local_70 = 1;
      local_50 = '\0';
    }
    else {
      lVar3 = param_2[1];
      if (local_50 != '\0') {
        *param_2 = lVar2;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0023992f;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *param_2 = lVar2;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0023996d:
      local_70 = param_2 + 1;
      *(undefined1 *)local_70 = 1;
LAB_00239974:
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar10 = local_38;
  FUN_00d23310();
  pcVar6 = local_40;
  if (local_40[0] == '\0') {
    pcVar6 = &local_58;
  }
  local_58 = local_40[0];
  *pcVar6 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)pcVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  if ((local_58 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00239a2c:
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


