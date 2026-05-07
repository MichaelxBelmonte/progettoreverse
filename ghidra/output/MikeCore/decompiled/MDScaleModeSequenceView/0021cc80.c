// Function: FUN_0021cc80
// Address: 0021cc80
// Size: 4167 bytes
// Class: MDScaleModeSequenceView


/* WARNING: Removing unreachable block (ram,0x0021dc84) */
/* WARNING: Removing unreachable block (ram,0x0021dc90) */

void FUN_0021cc80(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong **pplVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong unaff_RDI;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  longlong *local_40;
  
  FUN_00d3ecc0();
  plVar13 = local_48;
  pplVar11 = &local_40;
  local_50[0] = (char)local_40;
  pplVar7 = (longlong **)local_50;
  if ((char)local_40 != '\0') {
    pplVar7 = pplVar11;
  }
  *(undefined1 *)pplVar7 = 0;
  if (((char)local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fce70;
  pVar9 = (pthread_key_t)pplVar11;
  local_70 = plVar13;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*local_70 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6d40;
  if (cVar5 == '\0') {
    if (DAT_026f6d40 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_70 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar13 = *(longlong **)(unaff_RDI + 0x90);
    if (cVar5 == '\0') {
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(&UNK_00001550 + *plVar13))();
        plVar13 = local_48;
        local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_40);
        pplVar11 = &local_40;
        pplVar7 = &local_68;
        if ((char)local_40 != '\0') {
          pplVar7 = pplVar11;
        }
        *(undefined1 *)pplVar7 = 0;
        if (((char)local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (pthread_key_t)pplVar11;
        if (plVar13 == (longlong *)0x0) {
          plVar13 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar13 != (longlong *)0x0) goto LAB_0021d0c2;
        }
        else {
          if ((char)local_68 == '\0') {
LAB_0021d0c2:
            FUN_00d50b00();
          }
          if (plVar13 != (longlong *)0x0) {
            FUN_00d3ecf0();
            plVar13 = *(longlong **)(unaff_RDI + 0x90);
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            pplVar11 = &local_58;
            pplVar7 = &local_40;
            if ((char)local_40 == '\0') {
              pplVar7 = pplVar11;
            }
            local_58._0_1_ = (char)local_40;
            *(undefined1 *)pplVar7 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar9 = (pthread_key_t)pplVar11;
            if (plVar10 == (longlong *)0x0) {
              plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_0021d3fc:
              FUN_00d50b00();
            }
            else if ((char)local_58 == '\0') goto LAB_0021d3fc;
            (**(code **)(*plVar10 + 0x970))();
            FUN_0197c2b0();
            plVar2 = local_68;
            plVar10 = (longlong *)CONCAT71(local_80._1_7_,(char)local_80);
            if ((local_78 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (CONCAT71(local_b8._1_7_,(char)local_b8) != 0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            lVar1 = DAT_027e7c30;
            if (plVar2 == plVar10) {
              if (DAT_027e7c30 != 0) {
                FUN_00d50b00();
              }
              local_a8 = lVar1;
              local_a0 = '\x01';
              cVar5 = (**(code **)(*local_70 + 0x50))();
              if (cVar5 == '\0') {
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x398))();
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((cVar5 != '\0') && (*(char *)(unaff_RDI + 0x150) != '\x01')) {
                  *(undefined1 *)(unaff_RDI + 0x150) = 1;
                  FUN_0021e5f0();
                }
              }
              goto LAB_0021dc56;
            }
          }
        }
      }
      lVar1 = DAT_026f6d50;
      if (DAT_026f6d50 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_70 + 0x50))();
      lVar4 = DAT_026f6d58;
      cVar6 = '\x01';
      if (cVar5 == '\0') {
        if (DAT_026f6d58 != 0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*local_70 + 0x50))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026f6d60;
      if (cVar6 == '\0') {
        if (DAT_026f6d60 != 0) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*local_70 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026fe420;
        if (cVar5 == '\0') {
          if (DAT_026fe420 != 0) {
            FUN_00d50b00();
          }
          cVar5 = (**(code **)(*local_70 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_026f6d70;
          if (cVar5 == '\0') {
            if (DAT_026f6d70 != 0) {
              FUN_00d50b00();
            }
            cVar5 = (**(code **)(*local_70 + 0x50))();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (cVar5 != '\0') {
              (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
              plVar13 = local_48;
              if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
                (**(code **)(&UNK_00001668 + *local_68))();
                plVar13 = local_48;
                if (local_48 == (longlong *)0x0) {
                  bVar3 = true;
                  plVar13 = (longlong *)0x0;
                }
                else {
                  if ((char)local_40 == '\0') {
                    FUN_00d50b00();
                    bVar3 = false;
                    if (((char)local_40 == '\0') || (local_48 == (longlong *)0x0))
                    goto LAB_0021db1c;
                    FUN_00d50b20();
                  }
                  else {
                    local_40._0_1_ = '\0';
                  }
                  bVar3 = false;
                }
LAB_0021db1c:
                if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar13 != (longlong *)0x0) {
                  pplVar11 = &local_48;
                  FUN_00d3ecf0();
                  plVar13 = local_48;
                  FUN_00115af0();
                  if (plVar13 == (longlong *)0x0) {
LAB_0021db78:
                    pplVar11 = (longlong **)&DAT_02802688;
                  }
                  else {
                    (**(code **)(*plVar13 + 0x360))();
                    cVar5 = FUN_00e85ea0();
                    if (cVar5 == '\0') goto LAB_0021db78;
                  }
                  plVar13 = *pplVar11;
                  if (*(char *)(pplVar11 + 1) == '\0') {
                    if (plVar13 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    *(undefined1 *)(pplVar11 + 1) = 0;
                  }
                  if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01320d00();
                  plVar10 = local_48;
                  if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar13 == plVar10) {
                    local_40._0_1_ = '\0';
                    local_48 = (longlong *)0x0;
                    local_68 = (longlong *)0x0;
                    local_60 = '\0';
                    FUN_00228b40(&local_68,&local_48);
                  }
                  if (plVar13 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (!bVar3) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
          else {
            FUN_00d3ecf0();
            plVar10 = local_48;
            plVar13 = *(longlong **)(unaff_RDI + 0xc0);
            if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == plVar13) {
              if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
LAB_0021dacf:
                bVar3 = true;
              }
              else {
                FUN_006f3f00();
                if ((char)local_40 == '\0') {
                  if (local_48 == (longlong *)0x0) goto LAB_0021dacf;
                  FUN_00d50b00();
                  if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else if (local_48 == (longlong *)0x0) {
                  bVar3 = true;
                  goto LAB_0021dad4;
                }
                cVar5 = FUN_00751ba0();
                bVar3 = false;
                if (cVar5 != '\0') {
                  cVar5 = FUN_00791130();
                  if (cVar5 == '\0') {
                    FUN_00d50b20();
                    goto LAB_0021dc95;
                  }
                  bVar3 = false;
                }
              }
LAB_0021dad4:
              FUN_0021eea0(DAT_02394248);
              if (!bVar3) {
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          FUN_0021f1f0();
        }
      }
      else {
        FUN_0021a2c0();
      }
    }
    else if (plVar13 != (longlong *)0x0) {
      (**(code **)(&UNK_00001550 + *plVar13))();
      plVar13 = local_48;
      local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_40);
      pplVar11 = &local_68;
      if ((char)local_40 != '\0') {
        pplVar11 = &local_40;
      }
      *(undefined1 *)pplVar11 = 0;
      if (((char)local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (longlong *)0x0) {
        if (*(longlong *)(unaff_RDI + 0x90) != 0) goto LAB_0021d03c;
      }
      else {
        if ((char)local_68 == '\0') {
LAB_0021d03c:
          FUN_00d50b00();
        }
        FUN_00d50b20();
        plVar13 = *(longlong **)(unaff_RDI + 0x90);
        (**(code **)(&UNK_00001550 + *plVar13))();
        plVar10 = local_48;
        local_80._0_1_ = (char)local_40;
        pplVar11 = &local_80;
        if ((char)local_40 != '\0') {
          pplVar11 = &local_40;
        }
        *(undefined1 *)pplVar11 = 0;
        if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar10 == (longlong *)0x0) {
          plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_0021d14f:
          FUN_00d50b00();
        }
        else if ((char)local_80 == '\0') goto LAB_0021d14f;
        (**(code **)(*plVar10 + 0x978))();
        FUN_00d3ecf0();
        plVar2 = local_48;
        plVar10 = local_68;
        if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar10 == plVar2) {
          if (*(longlong *)(unaff_RDI + 0x98) != 0) {
            FUN_00d50b00();
            lVar1 = *(longlong *)(unaff_RDI + 0x98);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            cVar5 = FUN_01e420b0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar5 != '\0') goto LAB_0021dc56;
          }
          plVar13 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar13 == (longlong *)0x0) {
LAB_0021d9bc:
            plVar10 = (longlong *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_40);
            pplVar11 = &local_40;
            if ((char)local_40 == '\0') {
              pplVar11 = &local_68;
            }
            *(undefined1 *)pplVar11 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (longlong *)0x0) {
              plVar10 = *(longlong **)(unaff_RDI + 0x90);
              if (plVar10 == (longlong *)0x0) goto LAB_0021d9bc;
            }
            else if ((char)local_68 != '\0') goto LAB_0021d9be;
            FUN_00d50b00();
          }
LAB_0021d9be:
          cVar5 = FUN_01e420b0();
          if ((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            plVar13 = *(longlong **)(unaff_RDI + 0x90);
            if (plVar13 == (longlong *)0x0) {
LAB_0021da56:
              plVar10 = (longlong *)0x0;
            }
            else {
              (**(code **)(&UNK_00001550 + *plVar13))();
              plVar10 = local_48;
              pplVar11 = &local_40;
              if ((char)local_40 == '\0') {
                pplVar11 = &local_68;
              }
              local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_40);
              *(undefined1 *)pplVar11 = 0;
              if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 == (longlong *)0x0) {
                plVar10 = *(longlong **)(unaff_RDI + 0x90);
                if (plVar10 == (longlong *)0x0) goto LAB_0021da56;
              }
              else if ((char)local_68 != '\0') goto LAB_0021da58;
              FUN_00d50b00();
            }
LAB_0021da58:
            FUN_01e42250();
            if ((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_0021eea0(DAT_02394248);
        }
      }
    }
  }
  else {
    if (DAT_02804680 != 0) {
      DAT_02804680 = 0;
      FUN_00d50b20();
    }
    if (DAT_02804690 != 0) {
      DAT_02804690 = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      if ((lVar1 == 0) || (FUN_00d50b00(), *(longlong *)(unaff_RDI + 0x98) == 0)) {
        bVar3 = true;
      }
      else {
        FUN_00d50b00();
        bVar3 = false;
      }
      FUN_01c446f0();
      FUN_0021e520();
      if (!bVar3) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_0021e5f0();
    if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      plVar13 = local_48;
      local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_40);
      pplVar11 = &local_68;
      if ((char)local_40 != '\0') {
        pplVar11 = &local_40;
      }
      *(undefined1 *)pplVar11 = 0;
      if (((char)local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar13 == (longlong *)0x0) {
        plVar13 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar13 != (longlong *)0x0) goto LAB_0021cfad;
      }
      else {
        if ((char)local_68 == '\0') {
LAB_0021cfad:
          FUN_00d50b00();
        }
        if (plVar13 != (longlong *)0x0) {
          plVar13 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar13 == (longlong *)0x0) {
LAB_0021d2ab:
            plVar10 = (longlong *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            local_80._0_1_ = (char)local_40;
            pplVar11 = &local_80;
            if ((char)local_40 != '\0') {
              pplVar11 = &local_40;
            }
            *(undefined1 *)pplVar11 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (longlong *)0x0) {
              plVar10 = *(longlong **)(unaff_RDI + 0x90);
              if (plVar10 == (longlong *)0x0) goto LAB_0021d2ab;
            }
            else if ((char)local_80 != '\0') goto LAB_0021d2ad;
            FUN_00d50b00();
          }
LAB_0021d2ad:
          FUN_019f0ee0();
          plVar2 = local_68;
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar2 != (longlong *)0x0) {
            plVar13 = *(longlong **)(unaff_RDI + 0x90);
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_48;
            pplVar11 = &local_68;
            if ((char)local_40 != '\0') {
              pplVar11 = &local_40;
            }
            local_68 = (longlong *)CONCAT71(local_68._1_7_,(char)local_40);
            *(undefined1 *)pplVar11 = 0;
            if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (longlong *)0x0) {
              plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_0021d354:
              FUN_00d50b00();
            }
            else if ((char)local_68 == '\0') goto LAB_0021d354;
            (**(code **)(*plVar10 + 0xec0))();
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            plVar13 = *(longlong **)(unaff_RDI + 0x90);
            if (plVar13 == (longlong *)0x0) {
LAB_0021d723:
              plVar10 = (longlong *)0x0;
            }
            else {
              (**(code **)(&UNK_00001550 + *plVar13))();
              plVar10 = local_48;
              local_80._0_1_ = (char)local_40;
              pplVar11 = &local_80;
              if ((char)local_40 != '\0') {
                pplVar11 = &local_40;
              }
              *(undefined1 *)pplVar11 = 0;
              if (((char)local_40 != '\0') && (plVar10 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 == (longlong *)0x0) {
                plVar10 = *(longlong **)(unaff_RDI + 0x90);
                if (plVar10 == (longlong *)0x0) goto LAB_0021d723;
              }
              else if ((char)local_80 != '\0') goto LAB_0021d725;
              FUN_00d50b00();
            }
LAB_0021d725:
            FUN_019f0f90();
            plVar2 = *(longlong **)(unaff_RDI + 0x90);
            if (plVar2 == (longlong *)0x0) {
LAB_0021d7ba:
              plVar12 = (longlong *)0x0;
            }
            else {
              (**(code **)(&UNK_00001550 + *plVar2))();
              plVar12 = local_48;
              pplVar11 = &local_40;
              if ((char)local_40 == '\0') {
                pplVar11 = &local_b8;
              }
              local_b8._0_1_ = (char)local_40;
              *(undefined1 *)pplVar11 = 0;
              if (((char)local_40 != '\0') && (plVar12 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar12 == (longlong *)0x0) {
                plVar12 = *(longlong **)(unaff_RDI + 0x90);
                if (plVar12 == (longlong *)0x0) goto LAB_0021d7ba;
              }
              else if ((char)local_b8 != '\0') goto LAB_0021d7bd;
              FUN_00d50b00();
            }
LAB_0021d7bd:
            FUN_019f0ee0();
            local_90 = 0;
            local_98 = CONCAT71(local_80._1_7_,(char)local_80);
            if (local_78 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_90 = '\x01';
            FUN_01e26eb0();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (CONCAT71(local_80._1_7_,(char)local_80) != 0)) {
              FUN_00d50b20();
            }
            if ((plVar2 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
LAB_0021dc56:
  FUN_00d530a0();
LAB_0021dc95:
  if ((local_50[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


