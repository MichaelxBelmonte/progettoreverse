// Function: FUN_01b7e1b0
// Address: 01b7e1b0
// Size: 4430 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01b7e36b) */
/* WARNING: Removing unreachable block (ram,0x01b7e377) */
/* WARNING: Removing unreachable block (ram,0x01b7e3f6) */
/* WARNING: Removing unreachable block (ram,0x01b7e402) */

ulonglong FUN_01b7e1b0(undefined8 param_1,byte param_2)

{
  longlong ***ppplVar1;
  longlong ***ppplVar2;
  char cVar3;
  uint uVar4;
  longlong ****pppplVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  undefined4 *puVar11;
  longlong ****pppplVar12;
  longlong *unaff_RDI;
  longlong ****pppplVar13;
  undefined1 local_108 [4];
  uint uStack_104;
  undefined8 local_100;
  longlong ***local_f8;
  longlong ***local_f0;
  longlong ***local_e8;
  longlong ***local_e0;
  char local_d8;
  longlong ***local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong ***local_98;
  longlong ***local_90;
  char local_88;
  undefined4 local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int iStack_64;
  longlong ***local_60;
  char local_58;
  undefined8 local_50;
  longlong ***local_48;
  longlong ***local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xad0))();
  if (local_38[0] == '\0') {
    if ((longlong ****)local_40 != (longlong ****)0x0) {
      local_98 = local_40;
      FUN_00d50b00();
      if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b7e21e;
    }
  }
  else {
    local_98 = local_40;
    if ((longlong ****)local_40 != (longlong ****)0x0) {
LAB_01b7e21e:
      cVar3 = (**(code **)(*unaff_RDI + 0xa78))();
      if ((cVar3 != '\0') && (cVar3 = (**(code **)(*unaff_RDI + 0x9d0))(), cVar3 != '\0')) {
        local_78 = (longlong ****)(**(code **)(*unaff_RDI + 0x9d8))();
        local_b8 = (longlong ****)(**(code **)(*unaff_RDI + 0x9e0))();
        local_c0 = local_78;
        pppplVar5 = local_78;
        local_50 = local_b8;
        FUN_01ca6970();
        ppplVar1 = local_40;
        pVar10 = (pthread_key_t)pppplVar5;
        if ((local_38[0] == '\0') &&
           ((((longlong ****)local_40 != (longlong ****)0x0 && (FUN_00d50b00(), local_38[0] != '\0')
             ) && ((longlong ****)local_40 != (longlong ****)0x0)))) {
          FUN_00d50b20();
        }
        local_f8 = ppplVar1;
        FUN_01ca8220();
        local_40 = local_98;
        local_38[0] = '\0';
        uVar4 = FUN_00d23d70();
        uVar9 = (ulonglong)uVar4;
        if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && ((longlong ****)local_90 != (longlong ****)0x0)) {
          FUN_00d50b20();
        }
        if (((byte)uVar4 & param_2) != 0) {
          FUN_01ca7f90();
          local_e8 = local_40;
          if (local_38[0] == '\0') {
            if ((((longlong ****)local_40 != (longlong ****)0x0) &&
                (FUN_00d50b00(), local_38[0] != '\0')) &&
               ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          if ((longlong ****)local_e8 == (longlong ****)0x0) {
            uVar9 = 0;
            goto LAB_01b7f0b9;
          }
          pppplVar5 = (longlong ****)FUN_00e8fc40();
          FUN_0002cb50();
          (*(code *)(*pppplVar5)[3])();
          local_f0 = (longlong ***)pppplVar5;
          FUN_00e549d0();
          local_48 = local_40;
          if (local_38[0] == '\0') {
            if ((((longlong ****)local_40 != (longlong ****)0x0) &&
                (FUN_00d50b00(), local_38[0] != '\0')) &&
               ((longlong ****)local_40 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          if ((longlong ****)local_48 != (longlong ****)0x0) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar11 = &local_68;
            FUN_01252670(puVar11,0,local_108,0);
            ppplVar1 = local_40;
            pVar10 = (pthread_key_t)puVar11;
            local_e0 = (longlong ***)CONCAT71(local_e0._1_7_,local_38[0]);
            pppplVar5 = &local_e0;
            if (local_38[0] != '\0') {
              pppplVar5 = (longlong ****)local_38;
            }
            *(undefined1 *)pppplVar5 = 0;
            if ((local_38[0] != '\0') && ((longlong ****)ppplVar1 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            local_88 = 0;
            if (((char)local_e0 == '\0') && ((longlong ****)ppplVar1 != (longlong ****)0x0)) {
              FUN_00d50b00();
            }
            local_90 = ppplVar1;
            local_88 = '\x01';
            if ((longlong ****)ppplVar1 == (longlong ****)0x0) {
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar11 = &local_68;
              FUN_01253c10(puVar11,&local_90,local_108,0);
              pVar10 = (pthread_key_t)puVar11;
            }
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012527b0(&local_100,0,&local_80,0);
            pppplVar5 = (longlong ****)local_40;
            pppplVar12 = &local_60;
            pppplVar13 = (longlong ****)local_38;
            if (local_38[0] == '\0') {
              pppplVar13 = pppplVar12;
            }
            local_60 = (longlong ***)CONCAT71(local_60._1_7_,local_38[0]);
            *(undefined1 *)pppplVar13 = 0;
            if ((local_38[0] != '\0') && (pppplVar5 != (longlong ****)0x0)) {
              FUN_00d50b20();
            }
            local_d8 = 0;
            if (((char)local_60 == '\0') && (pppplVar5 != (longlong ****)0x0)) {
              FUN_00d50b00();
            }
            local_e0 = (longlong ***)pppplVar5;
            local_d8 = '\x01';
            if (pppplVar5 == (longlong ****)0x0) {
              pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              pppplVar12 = (longlong ****)&local_100;
              FUN_012535e0(pppplVar12,&local_e0,&local_80,0);
            }
            (**(code **)(*unaff_RDI + 0xa48))();
            if ((iStack_64 != 0) && (iStack_7c != 0)) {
              pppplVar12 = (longlong ****)((ulonglong)unaff_RDI[0x33] >> 0x20);
              if (((pppplVar12 != (longlong ****)0x0) &&
                  ((local_78._4_4_ == 0 ||
                   (local_40 = (longlong ***)unaff_RDI[0x33], cVar3 = FUN_00e7c020(), cVar3 == '\0')
                   ))) && ((local_50._4_4_ == 0 ||
                           ((local_60 = (longlong ***)unaff_RDI[0x33],
                            (ulonglong)local_60 >> 0x20 != 0 &&
                            (cVar3 = FUN_00e7c020(), cVar3 == '\0')))))) {
                local_38[0] = '\0';
                local_40 = (longlong ***)0x0;
                local_a8 = 0xffffffff;
                do {
                  pVar10 = (pthread_key_t)pppplVar12;
                  lVar7 = unaff_RDI[0x2b];
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar6 = _pthread_getspecific(pVar10);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pppplVar12 = local_50;
                  uVar4 = FUN_01252960(local_50,local_78,&local_40,&local_60);
                  pppplVar5 = (longlong ****)(ulonglong)uVar4;
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                } while (((byte)uVar4 & (longlong ****)local_40 == (longlong ****)0x0) != 0);
                if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                  FUN_00d50b20();
                }
                if ((byte)uVar4 == 0) {
                  local_58 = '\0';
                  local_60 = (longlong ***)0x0;
                  local_c4 = 0xffffffff;
LAB_01b7f0f1:
                  do {
                    pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
                    pppplVar5 = (longlong ****)local_48;
                    if ((pvVar6 != (void *)0x0) &&
                       (lVar7 = FUN_00e8b990(), pppplVar5 = (longlong ****)local_48, lVar7 != 0)) {
                      pppplVar5 = (longlong ****)
                                  local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    uVar8 = FUN_00e7bdb0();
                    pppplVar12 = (longlong ****)FUN_00e7bdb0();
                    cVar3 = FUN_01252960(pppplVar12,uVar8,&local_60,&local_b0);
                    if (cVar3 == '\0') goto LAB_01b7f2f4;
                  } while ((longlong ****)local_60 == (longlong ****)0x0);
                  local_40 = (longlong ***)local_b0;
                  FUN_00e7b970();
                  local_70 = (longlong ****)unaff_RDI[0x33];
                  FUN_00e7b820();
                  local_a0 = (longlong ****)local_40;
                  local_40 = (longlong ***)CONCAT44(uStack_a4,local_a8);
                  FUN_00e7b970();
                  local_d0 = (longlong ***)unaff_RDI[0x33];
                  FUN_00e7b820();
                  local_70 = (longlong ****)local_40;
                  pVar10 = (pthread_key_t)((ulonglong)local_40 >> 0x20);
                  if ((local_a0._4_4_ != 0) && (local_50._4_4_ != 0)) {
                    cVar3 = FUN_00e7c020();
                    if (cVar3 == '\0') goto LAB_01b7f2f4;
                    pVar10 = (pthread_key_t)((ulonglong)local_70 >> 0x20);
                  }
                  if (((pVar10 != 0) && (local_50._4_4_ != 0)) &&
                     (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                    local_70 = local_50;
                  }
                  lVar7 = unaff_RDI[0x2b];
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar6 = _pthread_getspecific(pVar10);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = local_60;
                  local_38[0] = '\0';
                  pppplVar12 = local_70;
                  FUN_012502a0(local_70,local_a0,(char)unaff_RDI[0x36]);
                  if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                  goto LAB_01b7f0f1;
                }
              }
            }
            if ((local_78._4_4_ == 0) && ((ulonglong)local_50 >> 0x20 == 0)) {
              lVar7 = unaff_RDI[0x2b];
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_38[0] = '\0';
              local_40 = (longlong ***)0x0;
              FUN_0124f820();
              if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
              local_a0 = (longlong ****)CONCAT44(local_a0._4_4_,0xffffffff);
              local_58 = '\0';
              local_60 = (longlong ***)0x0;
              while( true ) {
                pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
                pppplVar5 = (longlong ****)local_48;
                if ((pvVar6 != (void *)0x0) &&
                   (lVar7 = FUN_00e8b990(), pppplVar5 = (longlong ****)local_48, lVar7 != 0)) {
                  pppplVar5 = (longlong ****)local_48[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                  ;
                }
                uVar8 = FUN_00e7bdb0();
                pppplVar12 = (longlong ****)FUN_00e7bdb0();
                cVar3 = FUN_01252960(pppplVar12,uVar8,&local_60,&local_b0);
                pVar10 = (pthread_key_t)pppplVar12;
                if (cVar3 == '\0') break;
                if ((longlong ****)local_60 != (longlong ****)0x0) {
                  lVar7 = unaff_RDI[0x2b];
                  if (lVar7 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar6 = _pthread_getspecific(pVar10);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pppplVar12 = (longlong ****)CONCAT44(uStack_a4,local_a8);
                  local_40 = local_60;
                  local_38[0] = '\0';
                  FUN_012502a0(pppplVar12,local_b0,0);
                  if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar7 != 0) {
                    FUN_00d50b20();
                  }
                }
              }
              if ((local_58 != '\0') && ((longlong ****)local_60 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01b7ef63;
            }
            if (((iStack_64 == 0) || (local_100._4_4_ == 0)) ||
               (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
              uVar9 = CONCAT44(iStack_64,local_68);
              if (iStack_64 == 0) {
                pppplVar12 = (longlong ****)0x0;
                if (local_100._4_4_ == 0) goto LAB_01b7ea6f;
              }
              else {
                pppplVar12 = (longlong ****)CONCAT44(iStack_7c,local_80);
LAB_01b7eac4:
                if (((ulonglong)pppplVar12 >> 0x20 != 0) && ((ulonglong)local_78 >> 0x20 != 0)) {
                  if (local_50._4_4_ == 0) {
                    local_40 = (longlong ***)pppplVar12;
                    FUN_00e7b970();
                    local_60 = local_40;
                    local_40 = (longlong ***)local_78;
                    FUN_00e7b820();
                    local_50 = (longlong ****)local_40;
                    local_c0 = (longlong ****)local_40;
                    local_b8 = (longlong ****)FUN_00e7bdb0();
                  }
                  local_b0 = local_78;
                  if ((ulonglong)local_78 >> 0x20 != 0) {
LAB_01b7eb68:
                    if ((local_50._4_4_ != 0) && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                      local_c4 = 0xffffffff;
                      local_58 = '\0';
                      local_60 = (longlong ***)0x0;
LAB_01b7eba0:
                      pvVar6 = _pthread_getspecific((pthread_key_t)pppplVar12);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      pppplVar12 = (longlong ****)CONCAT44(iStack_7c,local_80);
                      cVar3 = FUN_01252960(pppplVar12,CONCAT44(iStack_64,local_68),&local_60,
                                           &local_a8);
                      if (cVar3 == '\0') goto LAB_01b7ed64;
                      local_40 = (longlong ***)CONCAT44(uStack_a4,local_a8);
                      FUN_00e7b970();
                      FUN_00e7b820();
                      local_70 = (longlong ****)local_40;
                      local_40 = (longlong ***)local_a0;
                      FUN_00e7b970();
                      FUN_00e7b820();
                      local_d0 = local_40;
                      pppplVar12 = (longlong ****)((ulonglong)local_40 >> 0x20);
                      pVar10 = (pthread_key_t)((ulonglong)local_40 >> 0x20);
                      if ((local_70._4_4_ != 0) && (local_50._4_4_ != 0)) {
                        cVar3 = FUN_00e7c020();
                        if (cVar3 == '\0') goto LAB_01b7ed64;
                        pVar10 = (pthread_key_t)((ulonglong)local_d0 >> 0x20);
                      }
                      if (((pVar10 != 0) && (local_50._4_4_ != 0)) &&
                         (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
                        local_d0 = (longlong ***)local_50;
                      }
                      pppplVar5 = (longlong ****)unaff_RDI[0x2b];
                      if (pppplVar5 != (longlong ****)0x0) {
                        FUN_00d50b00();
                      }
                      pvVar6 = _pthread_getspecific(pVar10);
                      if (pvVar6 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_40 = local_60;
                      local_38[0] = '\0';
                      pppplVar12 = (longlong ****)local_d0;
                      FUN_012502a0(local_d0,local_70,(char)unaff_RDI[0x36]);
                      if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0))
                      {
                        FUN_00d50b20();
                      }
                      if (pppplVar5 != (longlong ****)0x0) {
                        FUN_00d50b20();
                      }
                      goto LAB_01b7eba0;
                    }
                  }
                  goto LAB_01b7ef63;
                }
              }
            }
            else {
LAB_01b7ea6f:
              if (((uStack_104 == 0) || (iStack_7c == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0')
                 ) {
                pppplVar12 = (longlong ****)CONCAT44(iStack_7c,local_80);
                uVar9 = CONCAT44(iStack_64,local_68);
                if ((((ulonglong)uStack_104 << 0x20 | (ulonglong)pppplVar12) >> 0x20 != 0) &&
                   (iStack_64 != 0)) goto LAB_01b7eac4;
              }
              else {
                uVar9 = CONCAT44(iStack_64,local_68);
              }
            }
            pVar10 = (pthread_key_t)pppplVar12;
            lVar7 = unaff_RDI[0x2b];
            if (((*(char *)((longlong)unaff_RDI + 0x1b4) == '\0') ||
                (pVar10 = 0, (ulonglong)local_78 >> 0x20 == 0)) ||
               ((pVar10 = (pthread_key_t)((ulonglong)local_50 >> 0x20),
                (ulonglong)local_50 >> 0x20 != 0 || ((uVar9 >> 0x20 == 0 || (iStack_7c == 0)))))) {
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_40 = local_90;
              local_38[0] = '\0';
              FUN_012502a0(local_50,local_78,(char)unaff_RDI[0x36]);
              if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar10);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              pppplVar5 = local_78;
              ppplVar1 = local_90;
              local_40 = (longlong ***)local_78;
              FUN_00e7b820();
              FUN_00e7b970();
              ppplVar2 = local_40;
              local_40 = ppplVar1;
              local_38[0] = '\0';
              FUN_012502a0(ppplVar2,pppplVar5,(char)unaff_RDI[0x36]);
              if ((local_38[0] != '\0') && ((longlong ****)local_40 != (longlong ****)0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
              local_40 = (longlong ***)local_78;
              FUN_00e7b820();
              FUN_00e7b970();
              local_c0 = (longlong ****)local_40;
              local_b8 = (longlong ****)FUN_00e7bdb0();
            }
            goto LAB_01b7ef63;
          }
          goto LAB_01b7f095;
        }
        goto LAB_01b7f0b9;
      }
      uVar9 = 0;
      goto LAB_01b7e44e;
    }
  }
  uVar9 = 0;
  goto LAB_01b7e45e;
LAB_01b7ed64:
  local_40 = (longlong ***)CONCAT44(iStack_7c,local_80);
  FUN_00e7b970();
  local_70 = (longlong ****)local_40;
  FUN_00e7b820();
  if ((local_58 != '\0') && ((longlong ****)local_60 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0._4_4_ == 0) goto LAB_01b7ef63;
  goto LAB_01b7eb68;
LAB_01b7f2f4:
  if ((local_58 != '\0') && ((longlong ****)local_60 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
LAB_01b7ef63:
  (**(code **)(*unaff_RDI + 0xa50))();
  cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar3 != '\0') {
    if ((local_c0._4_4_ == 0) && (uVar9 = (**(code **)(*unaff_RDI + 0x9d8))(), uVar9 >> 0x20 == 0))
    {
LAB_01b7efd3:
      if ((local_b8._4_4_ != 0) || (uVar9 = (**(code **)(*unaff_RDI + 0x9e0))(), uVar9 >> 0x20 != 0)
         ) {
        local_60 = (longlong ***)(**(code **)(*unaff_RDI + 0x9e0))();
        if (((local_b8._4_4_ == 0) || ((ulonglong)local_60 >> 0x20 == 0)) ||
           (cVar3 = FUN_00e7c000(), cVar3 == '\0')) goto LAB_01b7f021;
      }
    }
    else {
      local_40 = (longlong ***)(**(code **)(*unaff_RDI + 0x9d8))();
      if ((local_c0._4_4_ != 0) &&
         (((ulonglong)local_40 >> 0x20 != 0 && (cVar3 = FUN_00e7c000(), cVar3 != '\0'))))
      goto LAB_01b7efd3;
LAB_01b7f021:
      (**(code **)(*unaff_RDI + 0x9f0))();
      FUN_01b7bf20();
    }
  }
  if ((local_d8 != '\0') && ((longlong ****)local_e0 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && ((longlong ****)local_90 != (longlong ****)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((longlong ****)local_f0 == (longlong ****)0x0) {
    uVar9 = CONCAT71((int7)((ulonglong)pppplVar5 >> 8),1);
  }
  else {
LAB_01b7f095:
    uVar9 = CONCAT71((int7)((ulonglong)pppplVar5 >> 8),(longlong ****)local_48 != (longlong ****)0x0
                    );
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b7f0b9:
  if ((longlong ****)local_f8 != (longlong ****)0x0) {
    FUN_00d50b20();
  }
LAB_01b7e44e:
  FUN_00d50b20();
LAB_01b7e45e:
  return uVar9 & 0xffffffff;
}


