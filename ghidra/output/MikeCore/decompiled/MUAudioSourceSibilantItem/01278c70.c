// Function: FUN_01278c70
// Address: 01278c70
// Size: 578 bytes
// Class: MUAudioSourceSibilantItem


void FUN_01278c70(undefined4 param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = *unaff_RSI;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
    FUN_00d23310();
    pVar4 = CONCAT31((int3)((uint)param_1 >> 8),local_60[0]);
    plVar5 = &local_40;
    if (local_60[0] != '\0') {
      plVar5 = (longlong *)local_60;
    }
    local_40 = CONCAT71(local_40._1_7_,local_60[0]);
    *(char *)plVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 == (void *)0x0) || (lVar2 = FUN_00e8b990(), lVar2 == 0)) {
      lVar2 = *(longlong *)(local_68 + 0x48);
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(local_68 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8) +
               0x48);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_0025e9a0();
      if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
         (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *unaff_RSI;
      if (lVar2 != 0) {
        local_60[0] = 0;
        local_48 = 0;
        local_50 = 0;
        local_58 = lVar2;
        if (0 < *(int *)(lVar2 + 0xc)) {
          lVar7 = 0;
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
            pvVar1 = _pthread_getspecific(pVar4);
            if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
              lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
            }
            lVar6 = *(longlong *)(lVar6 + 0x48);
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\0';
            local_40 = lVar6;
            FUN_00d235a0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar7);
          } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
        }
        FUN_001159b0();
      }
      *unaff_RDI = local_68;
      goto LAB_01278e9b;
    }
    lVar2 = *unaff_RSI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)unaff_RSI[1] != '\0') {
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
LAB_01278e9b:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


