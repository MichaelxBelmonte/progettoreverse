// ===== MUAraContentReader — Annotated small functions =====
// 19 readable functions

// ==================================================
// @016bc130 (1795 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong arg1;
  longlong this;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (pthread_key_t)puVar7;
  if ((this == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar8 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bc1f6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar3 = FUN_01653650(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0164e2c0();
        lVar8 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar8 == this) {
          uVar4 = FUN_0167b260();
          cVar3 = FUN_016bb8f0(extraout_XMM0_Qa_02,uVar4);
          if (cVar3 != '\0') {
            if (param_2 == 0x15) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d810();
              local_60 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar2 = true;
              }
              pVar6 = (pthread_key_t)lVar8;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01651ad0();
            }
            else if (param_2 == 0x14) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d7d0();
              local_60 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar2 = true;
              }
              pVar6 = (pthread_key_t)lVar8;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01651ad0();
            }
            else {
              bVar2 = false;
              local_60 = 0;
            }
            lVar9 = local_60;
            if (param_1 == (undefined8 *)0x0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
              local_70 = local_58;
              local_68 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_68 = '\x01';
              local_a0 = lVar9;
              local_98 = '\0';
              FUN_0172d300(&local_a0,param_2);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
              local_80 = local_58;
              local_78 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              lVar9 = local_60;
              local_78 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              local_88 = '\0';
              local_90 = lVar8;
              FUN_01689550();
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_016bc1f6;
          }
          if (DAT_02802f60 != (undefined8 *)0x0) {
            lVar8 = 0;
            if ((code *)*DAT_02802f60 != (code *)0x0) {
              (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bc1f6;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar10,"audioModification->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar8 = 0;
LAB_016bc1f6:
  FUN_00da71b0();
  return lVar8;
}




// ==================================================
// @016baff0 (1573 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong arg1;
  longlong this;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (pthread_key_t)puVar7;
  if ((this == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar8 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bb0b6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar3 = FUN_0166db10(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_01660830();
        lVar8 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar8 == this) {
          uVar4 = FUN_0167b260();
          cVar3 = FUN_016b9a60(extraout_XMM0_Qa_02,uVar4);
          if (cVar3 != '\0') {
            if (param_2 == 0x15) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d810();
              local_50 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              pVar6 = (pthread_key_t)lVar8;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d4c0();
            }
            else if (param_2 == 0x14) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d7d0();
              local_50 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              pVar6 = (pthread_key_t)lVar8;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d4c0();
            }
            else {
              bVar2 = false;
              local_50 = 0;
            }
            lVar9 = local_50;
            if (param_1 == (undefined8 *)0x0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
              local_70 = local_60;
              local_68 = 0;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_68 = '\x01';
              local_a0 = lVar9;
              local_98 = '\0';
              FUN_0172d300(&local_a0,param_2);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
              local_80 = local_60;
              local_78 = 0;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              lVar9 = local_50;
              local_78 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              local_88 = '\0';
              local_90 = lVar8;
              FUN_01689550();
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_016bb0b6;
          }
          if (DAT_02802f60 != (undefined8 *)0x0) {
            lVar8 = 0;
            if ((code *)*DAT_02802f60 != (code *)0x0) {
              (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bb0b6;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar10,"audioSource->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar8 = 0;
LAB_016bb0b6:
  FUN_00da71b0();
  return lVar8;
}




// ==================================================
// @016c2780 (1272 bytes) — math_loop

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *this;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_018f9610();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar3 = plVar5[10];
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar5[10] = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*param_2 == 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_00e7bcc0();
    FUN_01909ea0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = *param_2;
    FUN_00d243f0();
  }
  FUN_0123fbe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_0165b080();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar1[0xb];
    plVar5 = plVar1;
  }
  else {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    lVar3 = plVar5[0xb];
  }
  if (lVar3 != local_40) {
    if (local_40 == 0) {
      plVar5[0xb] = 0;
      param_1 = lVar3;
    }
    else {
      FUN_00d50b00();
      param_1 = plVar5[0xb];
      plVar5[0xb] = local_40;
    }
    if (param_1 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = 1;
  while( true ) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = plVar1;
    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    if (*(int *)(plVar5[0xc] + 0xc) <= lVar3) break;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    FUN_016cc400();
    lVar3 = lVar3 + 1;
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cc730();
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @016c3130 (1225 bytes) — math_loop

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong this;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  longlong local_d8;
  char local_d0;
  int iStack_74;
  double local_68;
  ulonglong local_60;
  char local_58;
  int local_4c;
  longlong local_40;
  
  FUN_016d63b0();
  uVar2 = *(undefined8 *)(this + 0x68);
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  local_40 = **(longlong **)(local_60 + 0x10);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  local_68 = (double)FUN_019079d0();
  local_4c = 2;
  while( true ) {
    pVar5 = (pthread_key_t)param_1;
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_60 + 0xc);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 <= local_4c) break;
    if (lVar6 != local_40) {
      local_40 = lVar6;
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    param_1 = *(longlong *)(local_60 + 0x10);
    lVar6 = *(longlong *)(param_1 + (longlong)local_4c * 8);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    dVar7 = (double)FUN_019079d0();
    dVar8 = dVar7;
    if (dVar7 <= local_68) {
      dVar8 = local_68;
    }
    dVar10 = dVar7;
    if (local_68 <= dVar7) {
      dVar10 = local_68;
    }
    if (DAT_02411148 < dVar8 / dVar10) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_016cc400();
    }
    if ((local_68 != dVar7) || (NAN(local_68) || NAN(dVar7))) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00e7b970();
      if (((local_60 >> 0x20 != 0) && (iStack_74 = (int)((ulonglong)uVar2 >> 0x20), iStack_74 != 0))
         && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_019079b0();
        uVar9 = FUN_00e7b970();
        FUN_016da710(uVar9,local_60);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        local_4c = local_4c + 1;
      }
    }
    local_4c = local_4c + 1;
    local_68 = dVar7;
  }
  return;
}




// ==================================================
// @016bd400 (1164 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  longlong arg1;
  longlong this;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar6 = param_1;
  uVar8 = FUN_00da7190();
  pVar5 = (pthread_key_t)puVar6;
  if ((this == 0) || (cVar2 = FUN_0168a120(), uVar8 = extraout_XMM0_Qa, cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar8,"provided object ref is invalid");
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar7 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar7 = 0;
        }
        goto LAB_016bd4c7;
      }
    }
    else {
      uVar8 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar2 = FUN_01658870(), uVar8 = extraout_XMM0_Qa_01, cVar2 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar8,"provided object ref is invalid");
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01654a00();
        lVar7 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (lVar7 == this) {
          uVar3 = FUN_0167b260();
          cVar2 = FUN_016bcb60(extraout_XMM0_Qa_02,uVar3);
          if (cVar2 == '\0') {
            if (DAT_02802f60 != (undefined8 *)0x0) {
              lVar7 = 0;
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
              }
              goto LAB_016bd4c7;
            }
          }
          else {
            if (param_1 == (undefined8 *)0x0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_68 = local_58;
              local_60 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_60 = '\x01';
              local_90 = '\0';
              local_98 = 0;
              FUN_0172d300(&local_98,param_2);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar7 != 0) {
              local_80 = '\0';
              local_88 = lVar7;
              FUN_01689550();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
              goto LAB_016bd4c7;
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar8,"playbackRegion->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar7 = 0;
LAB_016bd4c7:
  FUN_00da71b0();
  return lVar7;
}




// ==================================================
// @016c0b50 (1026 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  pthread_key_t in_ECX;
  undefined8 *this;
  longlong *plVar5;
  undefined8 extraout_XMM0_Qa;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9320(param_1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar3 = plVar5[10];
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar5[10] = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019012b0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  uVar4 = FUN_00e7bcc0();
  FUN_01909ea0(extraout_XMM0_Qa,uVar4);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123fbe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_0165b080();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  FUN_00d64850();
  lVar3 = plVar5[0xb];
  if (lVar3 != local_50) {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    plVar5[0xb] = local_50;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *this = plVar1;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @016c0400 (933 bytes) — calculation

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_88;
  int local_84;
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  char local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_0165db00(0,&local_88);
  local_60 = local_88 / local_84;
  local_88 = local_88 % local_84;
  if ((local_84 == 1) && (local_60 == 0)) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (undefined8 *)&DAT_025df2a0;
    local_60 = local_88;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 3;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_5c = local_84 << 2;
    local_68 = '\x01';
    local_60 = local_88;
    local_80 = (undefined8 *)&DAT_02509758;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (undefined8 *)&DAT_025df2a0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 4;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_58 = local_84 << 2;
    local_68 = '\x01';
    local_5c = local_88;
    local_80 = (undefined8 *)&DAT_025fa8b0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @016ba380 (749 bytes) — math_loop

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  longlong arg1;
  longlong this;
  longlong local_48;
  char local_40;
  
  pVar3 = (pthread_key_t)param_1;
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        if (param_2 == 0) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else if (param_1 == 0) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          lVar4 = 0;
          do {
            cVar1 = FUN_0172c0d0();
            if (cVar1 == '\0') {
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              goto LAB_016ba441;
            }
            lVar4 = lVar4 + 1;
          } while (param_2 != lVar4);
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_016670a0();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667ea0();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
  }
LAB_016ba441:
  FUN_00da71b0();
  return;
}




// ==================================================
// @016bcb60 (711 bytes) — calculation

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01657380();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01650890();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (DAT_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      cVar1 = (**(code **)(*local_40 + 0x3a0))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) {
            return 0;
          }
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
            return uVar2;
          }
          return uVar2;
        }
        return uVar2;
      }
    }
  }
  else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)();
    return 0;
  }
  return 0;
}




// ==================================================
// @016ba9d0 (696 bytes) — calculation

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong local_58;
  char local_50;
  
  FUN_00da7190();
  if ((this == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660830();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 == this) {
          if ((int)param_2 < 0) {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else if ((int)param_2 < *(int *)(DAT_028ad890 + 0xc)) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar1 = *(longlong *)(*(longlong *)(DAT_028ad890 + 0x10) + (ulonglong)param_2 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01668130();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ==================================================
// @016bb8f0 (667 bytes) — calculation

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *this;
  longlong *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01650890();
  if (cVar1 == '\0') {
    if (DAT_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      cVar1 = (**(code **)(*local_40 + 0x398))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01650620();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar5 = (longlong *)*this;
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            plVar5 = (longlong *)*this;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar5 + 0x3a0))();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01650330();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return uVar2;
        }
        if (local_40 == (longlong *)0x0) {
          return uVar2;
        }
        FUN_00d50b20();
        return uVar2;
      }
    }
  }
  else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)();
    return 0;
  }
  return 0;
}




// ==================================================
// @016bace0 (660 bytes) — calculation

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        FUN_0167b260();
        cVar1 = FUN_016b9a60();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            uVar2 = 0;
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016676f0();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          uVar2 = FUN_0172cba0();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ==================================================
// @016bbe20 (660 bytes) — calculation

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        FUN_0167b260();
        cVar1 = FUN_016bb8f0();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            uVar2 = 0;
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01650330();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          uVar2 = FUN_0172cba0();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ==================================================
// @016bd0f0 (660 bytes) — calculation

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        FUN_0167b260();
        cVar1 = FUN_016bcb60();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            uVar2 = 0;
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          uVar2 = FUN_0172cba0();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ==================================================
// @016ba6a0 (658 bytes) — math_loop

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  int iVar4;
  longlong lVar5;
  longlong local_60;
  char local_58;
  
  FUN_00da7190();
  if ((this == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    iVar4 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (iVar4 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      iVar4 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        iVar4 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      iVar4 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 == this) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01662650();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = DAT_028ad890;
        if (DAT_028ad890 == 0) {
LAB_016ba90a:
          iVar4 = 0;
        }
        else {
          lVar5 = 0;
          do {
            if (*(int *)(lVar1 + 0xc) <= (int)lVar5) {
              FUN_00018280();
              goto LAB_016ba90a;
            }
            cVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8) + 0x50))()
            ;
            lVar5 = lVar5 + 1;
          } while (cVar2 == '\0');
          FUN_00018280();
          iVar4 = (int)lVar5 + -1;
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return iVar4;
}




// ==================================================
// @016cc400 (623 bytes) — math_loop

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  ulonglong arg1;
  longlong this;
  ulonglong uVar9;
  int iVar10;
  longlong lVar12;
  char local_40;
  uint uVar11;
  
  uVar9 = arg1 >> 0x20;
  if (uVar9 != 0) {
    puVar1 = (ulonglong *)(this + 0x70);
    uVar5 = *(ulonglong *)(this + 0x70);
    if (7 < *(int *)(uVar5 + 0x18)) {
      lVar12 = 1;
      iVar8 = 0;
      iVar10 = *(int *)(*(longlong *)(uVar5 + 0x10) + 4);
      uVar3 = uVar9;
      do {
        if ((iVar10 != 0) && ((int)uVar3 != 0)) {
          cVar4 = FUN_00e7c000();
          if (cVar4 != '\0') {
            if (iVar8 != -8) {
              return;
            }
            uVar5 = *puVar1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar10 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar6 >> 3 <= lVar12) break;
        uVar3 = arg1 >> 0x20;
        iVar8 = iVar8 + 8;
        lVar12 = lVar12 + 1;
        iVar10 = *(int *)(*(longlong *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    if (uVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    if ((local_40 == '\0') && (arg1 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    uVar5 = *puVar1;
    uVar2 = *(uint *)(uVar5 + 0x18);
    pvVar7 = (void *)(ulonglong)uVar2;
    uVar11 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar11 = uVar2;
    }
    iVar10 = (int)uVar11 >> 3;
    if (7 < (int)uVar2) {
      lVar12 = 1;
      iVar8 = *(int *)(*(longlong *)(uVar5 + 0x10) + 4);
      do {
        if ((iVar8 != 0) && ((int)uVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          if (cVar4 != '\0') {
            iVar10 = (int)lVar12 + -1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar8 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        pvVar7 = (void *)(longlong)(iVar6 >> 3);
        if ((longlong)pvVar7 <= lVar12) break;
        uVar9 = arg1 >> 0x20;
        lVar12 = lVar12 + 1;
        iVar8 = *(int *)(*(longlong *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    iVar8 = *(int *)(arg1 + 0x18);
    FUN_00c8e340();
    lVar12 = *(longlong *)(arg1 + 0x10);
    _memmove(pvVar7,(void *)(longlong)(iVar8 + iVar10 * -8),param_3);
    *(ulonglong *)(lVar12 + (longlong)iVar10 * 8) = arg1;
    FUN_00d64850();
    uVar9 = *puVar1;
    if (uVar9 != arg1) {
      FUN_00d50b00();
      *puVar1 = arg1;
      if (uVar9 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @016b9ed0 (597 bytes) — calculation

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  longlong arg1;
  longlong this;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    bVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (bVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      bVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        bVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      bVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == this) {
        cVar1 = FUN_0172c0d0();
        if (cVar1 == '\0') {
          bVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            bVar2 = 0;
          }
        }
        else {
          FUN_016acc10();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01667e90();
          bVar2 = 1;
          if (cVar1 == '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_01667df0();
            bVar2 = bVar2 ^ 1;
          }
        }
      }
      else {
        bVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return bVar2;
}




// ==================================================
// @016be890 (568 bytes) — calculation

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_00d4ff40();
  *this = &DAT_025f89b0;
  this[2] = &DAT_025f8d70;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    this[10] = 0;
    this[0xb] = 0;
LAB_016bea35:
    this[0xc] = 0;
    this[0xd] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[9] = puVar3;
    iVar2 = DAT_02802630;
    this[10] = 0;
    if (iVar2 < 2) {
      this[0xb] = 0;
      this[0xc] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[10] = puVar3;
      iVar2 = DAT_02802630;
      this[0xb] = 0;
      if (iVar2 < 2) goto LAB_016bea35;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0xb] = puVar3;
      iVar2 = DAT_02802630;
      this[0xc] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        this[0xc] = puVar3;
        iVar2 = DAT_02802630;
        this[0xd] = 0;
        if (1 < iVar2) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_02572358;
          (*DAT_02572370)();
          this[0xd] = puVar3;
          iVar2 = DAT_02802630;
        }
        goto LAB_016bea6f;
      }
    }
    this[0xd] = 0;
  }
LAB_016bea6f:
  this[0xf] = 0;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)((longlong)this + 0x73) = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    this[0xf] = puVar3;
  }
  return;
}




// ==================================================
// @016be130 (536 bytes) — math_loop

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong this;
  
  if ((this == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if (DAT_02802f60 == (undefined8 *)0x0) {
      return '\0';
    }
    pcVar1 = (code *)*DAT_02802f60;
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return '\0';
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    else {
      if (param_2 == 0) {
        if (param_1 != 0) {
          if (DAT_02802f60 == (undefined8 *)0x0) {
            return '\0';
          }
          pcVar1 = (code *)*DAT_02802f60;
          goto joined_r0x016be1b8;
        }
      }
      else {
        if (param_1 == 0) {
          if (DAT_02802f60 == (undefined8 *)0x0) {
            return '\0';
          }
          pcVar1 = (code *)*DAT_02802f60;
          goto joined_r0x016be1b8;
        }
        lVar3 = 0;
        do {
          cVar2 = FUN_0172c0d0();
          if (cVar2 == '\0') {
            if (DAT_02802f60 == (undefined8 *)0x0) {
              return '\0';
            }
            pcVar1 = (code *)*DAT_02802f60;
            goto joined_r0x016be1b8;
          }
          lVar3 = lVar3 + 1;
        } while (param_2 != lVar3);
      }
      FUN_016ace20();
      if ((~DAT_028ad950 & param_3) == 0) {
        if ((param_2 != 0) || (param_3 != 0)) {
          if (DAT_02802f58 == '\0') {
            if (DAT_027cb0f4 != '\0') {
              return '\x01';
            }
            if (unaff_ESI != 0) {
              if (DAT_02802f50 == (code *)0x0) {
                return '\0';
              }
              DAT_02802f58 = 1;
              (*DAT_02802f50)();
              DAT_02802f58 = 0;
              return DAT_027cb0f4;
            }
          }
          return '\0';
        }
        if (DAT_02802f60 == (undefined8 *)0x0) {
          return '\0';
        }
        pcVar1 = (code *)*DAT_02802f60;
      }
      else {
        if (DAT_02802f60 == (undefined8 *)0x0) {
          return '\0';
        }
        pcVar1 = (code *)*DAT_02802f60;
      }
    }
  }
joined_r0x016be1b8:
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return '\0';
}



