// Function: FUN_01661d30
// Address: 01661d30
// Size: 1146 bytes
// Class: MUAraAudioSource


ulonglong FUN_01661d30(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  longlong local_38;
  
  local_3c = param_2;
  cVar2 = FUN_01733c10();
  if (cVar2 == '\0') {
    bVar10 = *(longlong *)(unaff_RDI + 0xf0) != 0;
  }
  else {
    bVar10 = false;
  }
  *(bool *)(unaff_RDI + 0xe9) = bVar10;
  FUN_0184a0c0();
  lVar8 = *unaff_RSI;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0xf0);
  if (lVar8 != 0) {
    FUN_00d50b00();
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined8 *)(unaff_RDI + 200) = *(undefined8 *)(lVar4 + 200);
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined8 *)(unaff_RDI + 0xd8) = *(undefined8 *)(lVar4 + 0xd8);
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    iVar1 = *(int *)(lVar4 + 0xe4);
    *(int *)(unaff_RDI + 0xe4) = iVar1;
    if (((*(double *)(unaff_RDI + 0xc0) != *(double *)(unaff_RDI + 200)) ||
        (NAN(*(double *)(unaff_RDI + 0xc0)) || NAN(*(double *)(unaff_RDI + 200)))) ||
       (param_1 = *(longlong *)(unaff_RDI + 0xd0), param_1 != *(longlong *)(unaff_RDI + 0xd8))) {
      *(undefined1 *)(unaff_RDI + 0xe8) = 1;
    }
    else {
      bVar10 = *(int *)(unaff_RDI + 0xe0) != iVar1;
      *(bool *)(unaff_RDI + 0xe8) = bVar10;
      if (!bVar10) {
        local_58 = '\0';
        local_60 = lVar8;
        cVar2 = FUN_01316d80();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pVar6 = (pthread_key_t)param_1;
        if (cVar2 != '\0') {
          lVar4 = *unaff_RSI;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          if (*(longlong *)(lVar4 + 0xf0) != 0) {
            *(undefined8 *)(lVar4 + 0xf0) = 0;
            FUN_00d50b20();
          }
          FUN_01660e50();
          lVar4 = *unaff_RSI;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          *(undefined1 *)(unaff_RDI + 0x106) = *(undefined1 *)(lVar4 + 0x106);
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar4 = *unaff_RSI;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar4 = *unaff_RSI;
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(longlong *)(lVar4 + 0x120);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          lVar5 = *unaff_RSI;
          local_50 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *unaff_RSI;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(longlong *)(lVar5 + 0x108);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_78 = 1;
          lVar5 = *unaff_RSI;
          local_80 = lVar4;
          local_38 = lVar4;
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            lVar5 = *unaff_RSI;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
            }
          }
          lVar4 = *(longlong *)(lVar5 + 0x110);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          local_68 = 1;
          plVar7 = &local_80;
          local_70 = lVar4;
          FUN_01662280(plVar7,&local_50,&local_70);
          lVar5 = local_38;
          pVar6 = (pthread_key_t)plVar7;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          uVar9 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0166213b;
        }
      }
    }
  }
  pVar6 = (pthread_key_t)param_1;
  uVar9 = 0;
LAB_0166213b:
  if ((char)local_3c != '\0') {
    lVar4 = *unaff_RSI;
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      lVar4 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined1 *)(unaff_RDI + 0x104) = *(undefined1 *)(lVar4 + 0x104);
  }
  FUN_01733c40();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return uVar9 & 0xffffffff;
}


