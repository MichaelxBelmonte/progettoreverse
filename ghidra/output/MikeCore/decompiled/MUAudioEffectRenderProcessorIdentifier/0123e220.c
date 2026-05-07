// Function: FUN_0123e220
// Address: 0123e220
// Size: 1258 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


void FUN_0123e220(void)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong unaff_RSI;
  longlong *plVar8;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0xb0) != 0) goto LAB_0123e6cd;
  plVar8 = *(longlong **)(unaff_RSI + 0xa0);
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar8;
  FUN_00d23310();
  plVar8 = local_48;
  local_38[0] = local_40[0];
  pcVar7 = local_38;
  pcVar2 = local_40;
  if (local_40[0] == '\0') {
    pcVar2 = pcVar7;
  }
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar6 = (pthread_key_t)pcVar7;
  if (local_38[0] == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0123e2c2;
    }
  }
  else if (plVar8 != (longlong *)0x0) {
LAB_0123e2c2:
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar8 + 0x378))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        local_58 = local_48;
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0123e341;
      }
    }
    else {
      local_58 = local_48;
      if (local_48 != (longlong *)0x0) {
LAB_0123e341:
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013941c0();
        if (local_40[0] == '\0') {
          if (local_48 != (longlong *)0x0) {
            local_68 = local_48;
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0123e3bb;
          }
        }
        else {
          local_68 = local_48;
          if (local_48 != (longlong *)0x0) {
LAB_0123e3bb:
            lVar4 = DAT_02704060;
            if (DAT_02704060 != 0) {
              FUN_00d50b00();
            }
            local_a8 = lVar4;
            local_a0 = '\x01';
            FUN_00d91000(1,&local_a8);
            local_60 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != (longlong *)0x0) {
              if (1 < *(int *)((longlong)local_60 + 0xc)) {
                FUN_00d23310();
                plVar8 = local_48;
                pcVar7 = local_40;
                if (local_40[0] == '\0') {
                  pcVar7 = local_38;
                }
                local_38[0] = local_40[0];
                *pcVar7 = '\0';
                if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_98 = local_68;
                local_90 = '\0';
                cVar1 = (**(code **)(*plVar8 + 0x50))();
                if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_38[0] != '\0') {
                  FUN_00d50b20();
                }
                plVar8 = local_60;
                if (cVar1 == '\0') {
                  FUN_00d23620();
                  local_48 = local_68;
                  local_40[0] = '\0';
                  FUN_00d23370();
                  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar4 = DAT_02704060;
                  local_88 = plVar8;
                  local_80 = '\0';
                  if (DAT_02704060 != 0) {
                    FUN_00d50b00();
                  }
                  local_78 = lVar4;
                  local_70 = '\x01';
                  FUN_00d95130();
                  plVar8 = local_48;
                  if (local_50 == local_48) {
LAB_0123e5c1:
                    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_40[0] == '\0') {
                      if (local_48 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      if (local_50 == (longlong *)0x0) {
                        local_50 = plVar8;
                      }
                      else {
                        local_50 = plVar8;
                        FUN_00d50b20();
                      }
                      goto LAB_0123e5c1;
                    }
                    if (local_50 != (longlong *)0x0) {
                      local_50 = local_48;
                      FUN_00d50b20();
                    }
                    local_40[0] = '\0';
                    local_50 = plVar8;
                  }
                  if ((local_70 != '\0') && (local_78 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_0123c8b0();
  plVar8 = *(longlong **)(unaff_RSI + 0xb0);
  plVar5 = plVar8;
  if (plVar8 != local_48) {
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0123e664;
      }
      FUN_00d50b00();
      plVar8 = *(longlong **)(unaff_RSI + 0xb0);
      *(longlong **)(unaff_RSI + 0xb0) = local_48;
      plVar5 = local_48;
    }
    else {
      local_40[0] = '\0';
      plVar5 = local_48;
LAB_0123e664:
      *(longlong **)(unaff_RSI + 0xb0) = plVar5;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_48;
    }
  }
  if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0123e6cd:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = *(longlong *)(unaff_RSI + 0xb0);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


